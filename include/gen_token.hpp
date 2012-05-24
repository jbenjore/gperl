typedef enum {
	Return,
	Add,
	Sub,
	Mul,
	Div,
	Greater,
	Less,
	GreaterEqual,
	LessEqual,
	NotEqual,
	VarDecl,
	FunctionDecl,
	Assign,
	BuiltinFunc,
	IfStmt,
	ElseStmt,
	Comma,
	SemiColon,
	LeftParenthesis,
	RightParenthesis,
	LeftBrace,
	RightBrace,
	LeftBracket,
	RightBracket,
	Shift,
	CallDecl,
	FieldDecl,
	TypeRef,
	LabelRef,
	LocalVarDecl,
	GlobalVarDecl,
	Var,
	ArrayVar,
	Int,
	Float,
	String,
	Object,
	Array,
	Operator,
	LocalVar,
	LocalArrayVar,
	GloabalVar,
	GlobalArrayVar,
	Function,
	Call,
	Argument,
	List,
	Undefined,
} GPerlT;

typedef struct _GPerlTokenInfo {
	GPerlT type;
	const char *name;
	const char *data;
} GPerlTokenInfo;

GPerlTokenInfo decl_tokens[] = {
	{Return, "Return", "return"},
	{Add, "Add", "+"},
	{Sub, "Sub", "-"},
	{Mul, "Mul", "*"},
	{Div, "Div", "/"},
	{Greater, "Greater", ">"},
	{Less, "Less", "<"},
	{GreaterEqual, "GreaterEqual", ">="},
	{LessEqual, "LessEqual", "<="},
	{NotEqual, "NotEqual", "!="},
	{VarDecl, "VarDecl", "my"},
	{FunctionDecl, "FunctionDecl", "sub"},
	{Assign, "Assign", "="},
	{BuiltinFunc, "BuiltinFunc", "print"},
	{BuiltinFunc, "BuiltinFunc", "push"},
	{IfStmt, "IfStmt", "if"},
	{ElseStmt, "ElseStmt", "else"},
	{Comma, "Comma", ","},
	{SemiColon, "SemiColon", ";"},
	{LeftParenthesis, "LeftParenthesis", "("},
	{RightParenthesis, "RightParenthesis", ")"},
	{LeftBrace, "LeftBrace", "{"},
	{RightBrace, "RightBrace", "}"},
	{LeftBracket, "LeftBracket", "["},
	{RightBracket, "RightBracket", "]"},
	{Shift, "Shift", "shift"},
	{CallDecl, "CallDecl", "&"},
	{FieldDecl, "FieldDecl", ""},
	{TypeRef, "TypeRef", ""},
	{LabelRef, "LabelRef", ""},
	{LocalVarDecl, "LocalVarDecl", ""},
	{GlobalVarDecl, "GlobalVarDecl", ""},
	{Var, "Var", ""},
	{ArrayVar, "ArrayVar", ""},
	{Int, "Int", ""},
	{Float, "Float", ""},
	{String, "String", ""},
	{Object, "Object", ""},
	{Array, "Array", ""},
	{Operator, "Operator", ""},
	{LocalVar, "LocalVar", ""},
	{LocalArrayVar, "LocalArrayVar", ""},
	{GloabalVar, "GloabalVar", ""},
	{GlobalArrayVar, "GlobalArrayVar", ""},
	{Function, "Function", ""},
	{Call, "Call", ""},
	{Argument, "Argument", ""},
	{List, "List", ""},
	{Undefined, "Undefined", ""},
};
