// ������.// ������.// ������.// ������.// ������.// ������.// ������.// ������.

#include "MapBase.h"

bool MapBase::Item::operator==(const Item& other)
{
    return key == other.key;
}

bool MapBase::Item::operator!=(const Item& other)
{
    return !operator==(other);
}

bool MapBase::Item::operator<(const Item& other)
{
    return key < other.key;
}

bool MapBase::Item::operator>(const Item& other)
{
    return key > other.key;
}
