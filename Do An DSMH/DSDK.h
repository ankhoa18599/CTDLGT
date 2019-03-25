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
