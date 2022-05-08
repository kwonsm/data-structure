// 포기함.// 포기함.// 포기함.// 포기함.// 포기함.// 포기함.// 포기함.// 포기함.


#ifndef TREE_h
#define TREE_h

#include"LinkedQueue.h"

class Tree 
{
public:
	class Position {
		virtual int element() = 0;
		virtual bool operator == (const Position& other) = 0;
		virtual bool operator != (const Position& other) { return !operator==(other); }
	};

	virtual Position root() = 0;
	virtual Position parent(const Position& p) = 0;
	virtual int num_children(const Position& p) = 0;
	virtual Position children(const Position& p) = 0;
	virtual int len() = 0;

	bool is_root(const Position& p)const;
	bool is_leaf(const Position& p) const;
	bool is_empty(const Position& p) const;
	int depth(const Position& p) const;
	int height1() const;
	int height2(const Position& p) const;
	int height(const Position& p) const;
};

#endif