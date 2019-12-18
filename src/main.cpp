#include "common.h"
#include <fstream>

extern TreeNode *root;
extern FILE *yyin;

void showTree(TreeNode *root)
{

    if (root == nullptr)
        return;
    auto children = root->child;
    while (children)
    {
        showTree(children);
        children = children->sibling;
    }
    Symbol *ownSymbol = nullptr;
    Symbol *cl = nullptr;
    Symbol *cr = nullptr;
    cout << "(Line " << root->lineno << ") " << root->nodeID << ": ";
    //cout<<root->nodeType<<endl;

    switch (root->nodeType)
    {
    case TreeNode::NODE_NONE:
        cout << "[Unknown] ";
        break;
    case TreeNode::NODE_STATMENT:
        cout << "[Statement <void>";
        switch (static_cast<StatementNode *>(root)->type)
        {
        case StatementNode::ST_NONE:
            cout << "Unknown";
            break;
        case StatementNode::ST_EMPTY:
            cout << "Empty";
            break;
        case StatementNode::ST_SCOPE:
            cout << "Scope";
            break;
        case StatementNode::ST_RET:
            cout << "Return";
            break;
        case StatementNode::ST_DO_WHILE:
            cout << "Do-While";
            break;
        case StatementNode::ST_WHILE:
            cout << "While";
            break;
        case StatementNode::ST_FOR:
            cout << "For";
            break;
        case StatementNode::ST_FUNCTION:
            cout << "Function<";
            cout << static_cast<FuncStatementNode *>(root)->symbol->value << "  " << Symbol::getSymbolName(static_cast<FuncStatementNode *>(root)->symbol) << ">";
            break;
        case StatementNode::ST_IF:
            cout << "If";
            break;
        case StatementNode::ST_IF_ELSE:
            cout << "If-Else";
            break;
        case StatementNode::ST_BREAK:
            cout << "Break";
            break;
        case StatementNode::ST_CONTINUE:
            cout << "Continue";
            break;
        case StatementNode::ST_GOTO:
            cout << "Goto";
            break;
        case StatementNode::ST_OUTPUT:
            cout << "Output";
            if (root->child->symbol->type == Symbol::VALUE_BOOL)
            {
                cerr << " output can't be bool" << endl;
            }
            break;
        }
        cout << "]";
        break;

    case TreeNode::NODE_FUNCCALL:
        cout << "[FuncCall<";
        ownSymbol = static_cast<DeclarationNode *>(root)->symbol;
        cout << Symbol::getSymbolName(ownSymbol);
        cout << "> " << static_cast<DeclarationNode *>(root)->symbol->value << "] ";
        break;

    case TreeNode::NODE_DECLARATION:
        cout << "[Declaration<";
        // fall through
        [[clang::fallthrough]];
    case TreeNode::NODE_EXPRESSION:
        if (root->nodeType == TreeNode::NODE_EXPRESSION)
            cout << "[Expression<";

        ownSymbol = static_cast<DeclarationNode *>(root)->symbol;

        cout << Symbol::getSymbolName(ownSymbol);

        cout << "> " << static_cast<DeclarationNode *>(root)->symbol->value << "] ";

        break;

    case TreeNode::NODE_OPERATOR:
        switch (static_cast<OperatorNode *>(root)->type)
        {
        case OperatorNode::OP_NOT:
        case OperatorNode::OP_BOOL:
            if (root->child->symbol->type != Symbol::VALUE_BOOL)
            {
                cerr << " expression is not BOOL-TYPE  " << endl;
            }
            ownSymbol = root->symbol = new OpNode(Symbol::VALUE_BOOL, "");
            break;
        case OperatorNode::OP_TADDR:
            ownSymbol = root->symbol = new OpNode(Symbol::VALUE_INT, "");
            break;
        case OperatorNode::OP_LAND:
        case OperatorNode::OP_LOR:
            cl = static_cast<DeclarationNode *>(root->child)->symbol;
            cr = static_cast<DeclarationNode *>(root->child->sibling)->symbol;
            if (cr->type != cl->type || cl->type != Symbol::VALUE_BOOL || cr->type != Symbol::VALUE_BOOL)
            {
                cerr << endl
                     << "type is error [" << Symbol::getSymbolName(cl)
                     << " , " << Symbol::getSymbolName(cr) << " ] or maybe they are not bool";
            }
            ownSymbol = root->symbol = new OpNode(Symbol::VALUE_BOOL, "");
            break;
        case OperatorNode::OP_MORE:
        case OperatorNode::OP_MOREEQ:
        case OperatorNode::OP_LESS:
        case OperatorNode::OP_LESSEQ:
        case OperatorNode::OP_EQ:
        case OperatorNode::OP_NE:
            cl = static_cast<DeclarationNode *>(root->child)->symbol;
            cr = static_cast<DeclarationNode *>(root->child->sibling)->symbol;
            if (cr->type != cl->type)
            {
                cerr << endl
                     << "type is error [" << Symbol::getSymbolName(cl)
                     << " , " << Symbol::getSymbolName(cr) << " ]";
            }
            ownSymbol = root->symbol = new OpNode(Symbol::VALUE_BOOL, "");
            break;
        case OperatorNode::OP_BREV:
        case OperatorNode::OP_INC:
        case OperatorNode::OP_DEC:
            ownSymbol = root->symbol = new OpNode(root->child->symbol->type, "");
            break;
        default:
            cl = static_cast<DeclarationNode *>(root->child)->symbol;
            cr = static_cast<DeclarationNode *>(root->child->sibling)->symbol;
            if (cr->type != cl->type)
            {
                cerr << endl
                     << "type is error [" << Symbol::getSymbolName(cl)
                     << " , " << Symbol::getSymbolName(cr) << " ]";
            }
            ownSymbol = root->symbol = new OpNode(root->child->symbol->type, "");
            break;
        }
        cout << "[Operator ";
        cout << OperatorNode::getTypeStr(static_cast<OperatorNode *>(root)->type);
        cout << " <";
        cout << Symbol::getSymbolName(ownSymbol);
        cout << ">]";
        break;
    }

    children = root->child;
    if (children)
    {
        cout << endl
             << "\tChildren: ";
    }
    while (children)
    {
        cout << children->nodeID << " ";
        children = children->sibling;
    }
    cout << endl;
    children = root->child;
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cerr << "failed to open file: " << argv[1] << endl;
        }
    }
    else
    {
#if YYDEBUG != 0
        extern int yydebug;
        yydebug = 1;
#endif
    }

    scope = new Scope();

    yyparse();

    TreeNode *temp = root;

    while (temp)
    {
        showTree(temp);
        temp = temp->sibling;
    }

    extern void generateASM();
    generateASM();

    return 0;
}
