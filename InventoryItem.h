/* 
 * File:   InventoryItem.h
 * Author: Neil
 *
 * Created on April 18, 2013, 1:59 PM
 */

#ifndef INVENTORYITEM_H
#define	INVENTORYITEM_H

#include <string>
using namespace std;

class InventoryItem {
public:

	InventoryItem() {
	};
	
	InventoryItem(int id){
		this->setId(id);
	}
	
	//Copy Constructor
	//tried to use getters, got const errors
	InventoryItem(const InventoryItem &copyMe) {
		this->setId(copyMe.id);
		this->setName(copyMe.name);
		this->setPrice(copyMe.price);
		this->setAdHeader(copyMe.adHeader);
	}
	
	InventoryItem(string name, int price, string ad, int id = 42) {
		this->setId(id);
		this->name = name;
		this->price = price;
		this->adHeader = ad;
	};

	~InventoryItem() {
	};
	
	//Could be inline, non-member and/or friend functions??
	bool operator==(const InventoryItem& right) const { return this->id == right.id;}
	bool operator!=(const InventoryItem& right) const { return *this != right;}
	bool operator<(const InventoryItem& right) const { return this->id < right.id;}
	bool operator>(const InventoryItem& right) const { return *this > right;}
	bool operator<=(const InventoryItem& right) const { return *this < right;}
	bool operator>=(const InventoryItem& right) const { return *this > right;}
	
	
	
	int const getId() {return id;};
	void setId(int value) {id = value;};
	
	string const getName() {return name;};
	void setName(string value) {name = value;};
	
	string const getType() {return type;};
	void setType(string value) {type = value;};
	
	int const getPrice() {return price;};
	void setPrice(int value) {price = value;};
	
	bool const getForSale() {return forSale;};
	void setForSale(bool value) {forSale = value;};
	
	string const getAdHeader() {return adHeader;};
	void setAdHeader(string value) {adHeader = value;};
	
	string  const getAdBody() {return adBody;};
	void setAdBody(string value) {adBody = value;};


private:
	int id;
	string name;
	string type;
	int price;
	bool forSale;
	string adHeader;
	string adBody;

};

/*inline getter setter code, this way is faster
 *I get a "no matching functions error"
inline bool operator==(const InventoryItem& left, const InventoryItem& right) {
	return left.iNum() == right.iNum();
}

inline bool operator!=(const InventoryItem& left, const InventoryItem& right) {
	return !operator==(left, right);
}

inline bool operator<(const InventoryItem& left, const InventoryItem& right) {
	return left.iNum() < right.iNum();
}

inline bool operator>(const InventoryItem& left, const InventoryItem& right) {
	return operator<(right, left);
}

inline bool operator<=(const InventoryItem& left, const InventoryItem& right) {
	return !operator>(left, right);
}

inline bool operator>=(const InventoryItem& left, const InventoryItem& right) {
	return !operator<(left, right);
}
 */

#endif	/* INVENTORYITEM_H */
