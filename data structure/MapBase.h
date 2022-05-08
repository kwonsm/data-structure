// ������.// ������.// ������.// ������.// ������.// ������.// ������.// ������.

#ifndef MAPBASE
#define MAPBASE


class MapBase
{
private:
	class Item {
	public:
		bool operator == (const Item& other);
		bool operator != (const Item& other);
		bool operator < (const Item& other);
		bool operator > (const Item& other);
	private:
		int key, value;
	};
};

#endif 