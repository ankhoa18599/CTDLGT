#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;


//.........................Monhoc............................
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
typedef struct NodeMH *NODEPTR;
NODEPTR tree= NULL;

//.....................danh sach sinh vien....................
struct sinhvien
{
	char msv[20]; 	//ma sinh vien
	char ho[10]; 	//ho sinh vien
	char ten[10];	//ten sinh vien
	char gt[10]; 	// gioi tinh
	long long std; 	// so dien thoai
	char malop[15]; //ma lop
};
typedef struct sinhvien SinhVien;
struct NodeSV
{
	SinhVien data;
	struct NodeSV* nextSV;
};

typedef struct NodeSV NODESV;
struct listSV
{
	int n = -1;
	NODESV *Head, *Tail;
};
typedef struct listSV LISTSV;

//.....................danh sach dang ki.......................
struct dsdk
{
	char msv[20];
	float diem; 	//diem
};

typedef struct dsdk DSDK;
struct NodeDK
{
	DSDK data;
	struct NodeDK* nextDK;
};
typedef struct NodeDK NODEDK;
struct listDK
{
	int m=-1;
	NODEDK *head, *tail;
};
typedef struct listDK LISTDK;
//danh sach lop tin chi
struct dsltc
{
	int malop; 		//ma lop
	int nienkhoa;	// nien khoa
	int hocki; 	// hoc ki
	int nhom; 		//nhom
	int sosv;	
};
typedef struct dsltc dsLTC;
struct DSLTC
{
	dsltc info;
};
