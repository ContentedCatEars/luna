#include "SyntaxTree.h"

namespace luna
{
    void Terminator::Accept(Visitor *v)
    {
    }

    void BinaryExpression::Accept(Visitor *v)
    {
    }

    void UnaryExpression::Accept(Visitor *v)
    {
    }

    void FunctionBody::Accept(Visitor *v)
    {
    }

    void ParamList::Accept(Visitor *v)
    {
    }

    void NameList::Accept(Visitor *v)
    {
    }

    void TableDefine::Accept(Visitor *v)
    {
    }

    void TableIndexField::Accept(Visitor *v)
    {
    }

    void TableNameField::Accept(Visitor *v)
    {
    }

    void TableArrayField::Accept(Visitor *v)
    {
    }
} // namespace luna
