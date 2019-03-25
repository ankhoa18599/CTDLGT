#include <iostream>


//------Monhoc------ 
//cay nhi phan
struct monhoc
{
	char mmh[10];	//ma mon hoc
	char tmh[50];	// ten mon hoc
	int stclt;		// so tinh chi li thuyet
	int stcth;		// so tinh chi thuc hanh
};
typedef struct monhoc MonHoc;
struct NodeMH 		//node mon hoc
{
	MonHoc MH;
	struct NodeMH *left;
	struct NodeMH *right;
};
typedef struct NodeMH *NODEMH;
NODEMH tree= NULL;


