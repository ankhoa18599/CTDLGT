#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;


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
typedef struct NodeMH *NODEPTR;
NODEPTR tree= NULL;

//------danh sach sinh vien------
//danh sach lien ket don
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

//------danh sach dang ki------
//danh sach lien ket don
struct dsdk
{
	char msv[20]; //ma sinh vien
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
	int n=-1;
	NODEDK *head, *tail;
};
typedef struct listDK LISTDK;

//------danh sach lop tin chi------
//danh sach tuyen tinh la mang mot con tro. con tro tro toi danh sach sinh vien dang ki
#define MAXLTC 100
struct ltc
{
	int malop; 		//ma lop
	char mmh[10];	//ma mon hoc
	int nienkhoa;	// nien khoa
	int hocki; 		// hoc ki
	int nhom; 		//nhom
	int nsvmax;	
};
typedef struct ltc Ltc;
struct	lTC
{
	Ltc info;
	LISTDK dssv;
};
typedef struct lTC LTC;
typedef struct lTC* pLTC;

struct dsLTC
{
	int n=-1;
	pLTC DsLTC[MAXLTC];
};
typedef struct dsLTC DSLTC;


