#pragma once
#include "Headers.h"

#define FST_ARR_SIZE 32

namespace FST
{
	enum LEXTYPE {
		LEX_NOT_FOUND = -1, COMMON_LEX = 0, LEX_ID_TABLE, PRIORITY_LEX, LITERAL_LEX, ACTION_LEX
	};
	struct FST_RESULT
	{
		char lex;
		LEXTYPE lex_type;
	};

	struct RELATION
	{
		char symbol;
		short nnode;
		RELATION(char c = 0x00, short ns = NULL);
	};

	struct NODE
	{
		short n_relation;
		RELATION* relations;
		NODE();
		NODE(short n, RELATION rel, ...);
	};

	struct FST
	{
		const char* string;
		short position;
		short nstates;
		NODE* nodes;
		short* rstates;
		char lex;
		LEXTYPE lex_type;
		FST();
		FST(const char* s, short ns, char l, LEXTYPE l_t, NODE n, ...);
	};

	bool execute(FST& fst);
	bool step(FST& fst, short*& rstates);
	FST* arrFST();
	FST_RESULT CheckLexem(const char* lex);
};