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
