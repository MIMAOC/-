#include<iostream>
#include<fstream>
using namespace std;

//基类
class Person
{
public:
    string classNum;        //学号
    string studName;        //姓名
    string gender;          //性别
    string birthday;        //出生年月
    string origin;          //籍贯
    string address;         //家庭住址
    string parentsName;     //家长姓名
    string parentsNum;      //家长电话
    string studNum;         //学生电话
    string grade;           //年级
    string major;           //专业
    string classroom;       //班级
    string research;        //研究方向
	string tutor;           //导师姓名
	virtual void Input() = 0;//输入信息
	virtual void putout() = 0;//输出信息
	virtual void Save() = 0;//保存信息
};

//本科生
class UnderGraduate:public Person
{
public:
    void Input()            //输入
    {
        cout << "\t\t学号：";
		cin >> classNum;
		cout << "\t\t姓名：";
		cin >> studName;
		cout << "\t\t性别：";
		cin >> gender;
		cout << "\t\t出生年月：";
		cin >> birthday;
        cout << "\t\t年级：";
		cin >> grade;
		cout << "\t\t专业：";
		cin >> major;
		cout << "\t\t班级：";
		cin >> classroom;
		cout << "\t\t籍贯：";
		cin >> origin;
		cout << "\t\t学生电话：";
		cin >> studNum;
		cout << "\t\t家庭住址：";
		cin >> address;
		cout << "\t\t家长姓名：";
		cin >> parentsName;
		cout << "\t\t家长电话：";
		cin >> parentsNum;
    }

    void putout()               //输出
    {
        cout << "\t\t学号：" << classNum << endl;
		cout << "\t\t姓名：" << studName << endl;
		cout << "\t\t性别：" << gender << endl;
		cout << "\t\t出生年月：" << birthday << endl;
        cout << "\t\t年级：" << grade << endl;
		cout << "\t\t专业：" << major << endl;
		cout << "\t\t班级：" << classroom << endl;
		cout << "\t\t籍贯：" << origin << endl;
		cout << "\t\t学生电话：" << studNum << endl;
		cout << "\t\t家庭住址：" << address << endl;
		cout << "\t\t家长姓名：" << parentsName << endl;
		cout << "\t\t家长电话：" << parentsNum << endl;
    }

    void Save()                 //保存
    {
        ofstream outfile("本科生.txt",ios::app);
        outfile << "学号：" << classNum << endl;
		outfile << "姓名：" << studName << endl;
		outfile << "性别：" << gender << endl;
		outfile << "出生年月：" << birthday << endl;
        outfile << "年级：" << grade << endl;
		outfile << "专业：" << major << endl;
		outfile << "班级：" << classroom << endl;
		outfile << "籍贯：" << origin << endl;
		outfile << "学生电话：" << studNum << endl;
		outfile << "家庭住址：" << address << endl;
		outfile << "家长姓名：" << parentsName << endl;
		outfile << "家长电话：" << parentsNum << endl;
        outfile.close();
    }
};

//硕士研究生
class PostGraduate:public Person
{
public:
    void Input()            //输入
    {
        cout << "\t\t学号：";
		cin >> classNum;
		cout << "\t\t姓名：";
		cin >> studName;
		cout << "\t\t性别：";
		cin >> gender;
		cout << "\t\t出生年月：";
		cin >> birthday;
        cout << "\t\t年级：";
		cin >> grade;
		cout << "\t\t专业：";
		cin >> major;
		cout << "\t\t班级：";
		cin >> classroom;
        cout << "\t\t研究方向：";
		cin >> research;
		cout << "\t\t导师姓名：";
		cin >> tutor;
		cout << "\t\t籍贯：";
		cin >> origin;
		cout << "\t\t学生电话：";
		cin >> studNum;
		cout << "\t\t家庭住址：";
		cin >> address;
		cout << "\t\t家长姓名：";
		cin >> parentsName;
		cout << "\t\t家长电话：";
		cin >> parentsNum;
    }

    void putout()               //输出
    {
        cout << "学号：" << classNum << endl;
		cout << "姓名：" << studName << endl;
		cout << "性别：" << gender << endl;
		cout << "出生年月：" << birthday << endl;
        cout << "年级：" << grade << endl;
		cout << "专业：" << major << endl;
		cout << "班级：" << classroom << endl;
        cout << "研究方向：" << research << endl;
		cout << "导师姓名：" << tutor << endl;
		cout << "籍贯：" << origin << endl;
		cout << "学生电话：" << studNum << endl;
		cout << "家庭住址：" << address << endl;
		cout << "家长姓名：" << parentsName << endl;
		cout << "家长电话：" << parentsNum << endl;
    }

    void Save()                 //保存
    {
        ofstream outfile ("硕士研究生.txt",ios::app);
        outfile << "学号：" << classNum << endl;
		outfile << "姓名：" << studName << endl;
		outfile << "性别：" << gender << endl;
		outfile << "出生年月：" << birthday << endl;
        outfile << "年级：" << grade << endl;
		outfile << "专业：" << major << endl;
		outfile << "班级：" << classroom << endl;
		outfile << "研究方向：" << research << endl;
		outfile << "导师姓名：" << tutor << endl;
		outfile << "籍贯：" << origin << endl;
		outfile << "学生电话：" << studNum << endl;
		outfile << "家庭住址：" << address << endl;
		outfile << "家长姓名：" << parentsName << endl;
		outfile << "家长电话：" << parentsNum << endl;
        outfile.close();
    }
};

//博士研究生
class DoctoralStudent:public Person
{
public:
    void Input()            //输入
    {
        cout << "\t\t学号：";
		cin >> classNum;
		cout << "\t\t姓名：";
		cin >> studName;
		cout << "\t\t性别：";
		cin >> gender;
		cout << "\t\t出生年月：";
		cin >> birthday;
        cout << "\t\t年级：";
		cin >> grade;
		cout << "\t\t专业：";
		cin >> major;
		cout << "\t\t班级：";
		cin >> classroom;
        cout << "\t\t研究方向：";
		cin >> research;
		cout << "\t\t导师姓名：";
		cin >> tutor;
		cout << "\t\t籍贯：";
		cin >> origin;
		cout << "\t\t学生电话：";
		cin >> studNum;
		cout << "\t\t家庭住址：";
		cin >> address;
		cout << "\t\t家长姓名：";
		cin >> parentsName;
		cout << "\t\t家长电话：";
		cin >> parentsNum;
    }

    void putout()               //输出
    {
        cout << "\t\t学号：" << classNum << endl;
		cout << "\t\t姓名：" << studName << endl;
		cout << "\t\t性别：" << gender << endl;
		cout << "\t\t出生年月：" << birthday << endl;
        cout << "\t\t年级：" << grade << endl;
		cout << "\t\t专业：" << major << endl;
		cout << "\t\t班级：" << classroom << endl;
        cout << "\t\t研究方向：" << research << endl;
		cout << "\t\t导师姓名：" << tutor << endl;
		cout << "\t\t籍贯：" << origin << endl;
		cout << "\t\t学生电话：" << studNum << endl;
		cout << "\t\t家庭住址：" << address << endl;
		cout << "\t\t家长姓名：" << parentsName << endl;
		cout << "\t\t家长电话：" << parentsNum << endl;
    }

    void Save()                 //保存
    {
        ofstream outfile ("博士研究生.txt",ios::app);
        outfile << "学号：" << classNum << endl;
		outfile << "姓名：" << studName << endl;
		outfile << "性别：" << gender << endl;
		outfile << "出生年月：" << birthday << endl;
        outfile << "年级：" << grade << endl;
		outfile << "专业：" << major << endl;
		outfile << "班级：" << classroom << endl;
		outfile << "研究方向：" << research << endl;
		outfile << "导师姓名：" << tutor << endl;
		outfile << "籍贯：" << origin << endl;
		outfile << "学生电话：" << studNum << endl;
		outfile << "家庭住址：" << address << endl;
		outfile << "家长姓名：" << parentsName << endl;
		outfile << "家长电话：" << parentsNum << endl;
        outfile.close();
    }
};

//主界面
void InterFace()
{
    cout << ">>>>>>>>>>>>>>欢迎使用高校学生联系方式管理系统<<<<<<<<<"<<endl;
    cout << "*****************************************************" << endl;
    cout << "*                     1.添加信息                  *" << endl;
    cout << "*                     2.查找信息                  *" << endl;
    cout << "*                     3.修改信息                  *" << endl;
    cout << "*                     4.删除信息                  *" << endl;
    cout << "*                     5.保存信息                  *" << endl;
    cout << "*                     0.退出系统                  *" << endl;
    cout << "*****************************************************" << endl;
    cout << "温馨提示：--退出前请确保所有信息已保存--" << endl;
    cout << "         --请添加完所有信息后再进行保存--" << endl;
    cout << "         --建议在退出前再进行保存--" << endl;
    cout << "请选择要执行的操作：";
}

//学生信息查询界面
void SearchStudInterface()
{
    cout << endl;
	cout << ">>>>>>>>>>查询方式<<<<<<<<<<" << endl;
	cout << "*         1、专业          *" << endl;
	cout << "*         2、班级          *" << endl;
	cout << "*         3、学号          *" << endl;
	cout << "****************************" << endl;
	cout << "请选择查询方式：";
}

template <typename T>//动态数组函数模板
void Change(T*& identity, int oldlength, int newlength)
{
	T* temp = new T[newlength];
	int number = min(oldlength, newlength);
	copy(identity, identity + number, temp); 
	delete[]identity;
	identity = temp;
}

template<typename T>//添加信息函数模板
void Get(T& identity, int& oldlength)
{
    cout << "请输入所要添加的学生的学号：";
    string Fnumber;
    cin >> Fnumber;
    cout << endl;
    int n = 1;
    int i;
    while(n)
    {
        for (i = 0; i < oldlength; i++)
        {
            if (identity[i].classNum == Fnumber)
            {
                cout << "该学号已经存在！请重新输入！" << endl;
                break;
            }
            else
                continue;
        }
        if(i < oldlength)
        {
            n = 1;
            cout << "请输入所要添加的学生的学号：";
            cin >> Fnumber;
            cout << endl;
        }
        else n = 0;
    }
    if(!n)
    {
        int newlength = oldlength + 1;
        Change(identity, oldlength, newlength);
        identity[oldlength].Input();
        oldlength = newlength;
    }
}

template<typename T>//删除信息函数模板
void Delete(T& identity, int& oldlength,int number)
{
	cout << endl;
	cout << ">>>>>>>>>>请确认是否删除<<<<<<<<<<" << endl;
	cout << "*            1、确定             *" << endl;
	cout << "*            2、返回             *" << endl;
	cout << "**********************************" << endl;
	cout << "请慎重选择，删除后无法恢复：";
	int choice;
	cin >> choice;;
	switch (choice)
	{
	case 1:
	{
		for (int x = number; x < oldlength - 1; x++)
		{
			identity[x] = identity[x + 1];
		}
		Change(identity, oldlength, oldlength - 1);
		oldlength = oldlength - 1;
		cout << "删除成功！" << endl;
		break;
	}
	case 0:
	{
		break;
	}
	default:
		break;
	}
}

template<typename T>//保存信息函数模板
void Preservation(T identity,int oldlength)
{
	for (int i = 0; i < oldlength; i++)
	{
		identity[i].Save();
	}
}

//统计本科生文本数据中本科生对象数
int UGive()
{
	char c;
	int n = 0;
	ifstream uinfile("本科生1.dat", ios::in);
	while (uinfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	uinfile.close();
	return n%13;
}

//统计研究生文本数据中研究生对象数
int PGive()
{
	char c;
	int n = 0;
	ifstream ginfile("硕士研究生.dat", ios::in);
	while (ginfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	ginfile.close();
	return n%13;
}

//统计教师文本数据中教师对象数
int DGive()
{
	char c;
	int n = 0;
	ifstream tinfile("博士研究生.dat", ios::in);
	while (tinfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	tinfile.close();
	return n%13;
}

template <typename T>       //查询信息
void SearchMajor(T* A,int m)
{
    SearchStudInterface();
    int way;
    cin >> way;
    switch(way)
    {
        case 1:
        {
            cout << "所查找学生的专业：";
            string Fmajoy;
            cin >> Fmajoy;
            cout << endl;
            int n = 0;
            for (int i = 0; i < m; i++)
            {
                if (A[i].major == Fmajoy)
                {
                    A[i].putout();
                    n++;
                    cout << endl;
                }
                else
                    continue;
            }
            if (n == 0)
            {
                cout << "查无此专业或此专业无人" << endl;
            }
            else
                cout << "本专业人数：" << n << endl;
            break;
        }
        case 2:
        {
            cout << "所查找学生的班级：";
            string FClass;
            cin >> FClass;
            cout << endl;
            int n = 0;
            for (int i = 0; i < m; i++)
            {
                if (A[i].classroom == FClass)
                {
                    A[i].putout();
                    n++;
                    cout << endl;
                }
                else
                    continue;
            }
            if (n == 0)
            {
                cout << "查无此班级或此班级无人" << endl;
            }
            else
                cout << "本班级人数：" << n << endl;
            break;
        }
        case 3:
        {
            cout << "所查找学生的学号：";
            string Fnumber;
            cin >> Fnumber;
            cout << endl;
            int n = 0;
            for (int i = 0; i < m; i++)
            {
                if (A[i].classNum == Fnumber)
                {
                    A[i].putout();
                    cout << endl;
                    n++;
                    break;
                }
                else
                    continue;
            }
            if (n == 0)
            {
                cout << "查无此学生或输入的学生学号错误" << endl;
            }
            break;
        }
        default:
        break;
    }
}

template <typename T>       //修改信息
void ChangeMajor(T* A,int m)
{
    cout << "请输入所修改学生的学号：";
    string Fnumber;
    cin >> Fnumber;
    cout << endl;
    int n = 0;
    for (int i = 0; i < m; i++)
    {
        if (A[i].classNum == Fnumber)
        {
            cout << "开始修改信息" << endl;
            A[i].Input();
            cout <<"修改信息成功！"<< endl;
            n = 1;
            break;
        }
        else
            continue;
    }
    if (n == 0)
        cout << "无此学生或输入的学生学号错误" << endl;
}

template <typename T>       //删除信息
void DeleteMajor(T* A,int m)
{
    cout << "请输入所删除学生的学号：";
    string Fnumber;
    cin >> Fnumber;
    int n = 0;
    for (int i = 0; i < m; i++)
    {
        if (A[i].classNum == Fnumber)
        {
            n = i;
            break;
        }
        else
            continue;
    }
    if (n)
    {
        Delete(A, m, n);
    }
    else
    {
        cout << "无此学生或输入的学生学号错误" << endl;
    }
}

int main()
{
    UnderGraduate * U = new UnderGraduate[1];
    int UNumber = 1;
    PostGraduate * P = new PostGraduate[1];
    int PNumber = 1;
    DoctoralStudent * S = new DoctoralStudent[1];
    int DNumber = 1;
    while(1)
    {
        InterFace();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1://添加信息
        {
            cout << "所添加信息人员的身份（本科生/硕士/博士）：";
			string identity;
			cin >> identity;
			if (identity == "本科生")
			{
				Get(U, UNumber);
				cout << "添加本科生信息成功！" << endl;
			}
			else if (identity == "硕士")
			{
				Get(P, PNumber);
				cout << "添加硕士研究生信息成功！" << endl;
			}
			else if (identity == "博士")
			{
				Get(S, DNumber);
				cout << "添加博士研究生信息成功！" << endl;
			}
			cout << endl;
            break;
        }
        case 2://查找信息
        {
            cout << "所查找信息人员的身份（本科/硕士/博士）：";
			string identity;
			cin >> identity;
            if(identity == "本科")
                SearchMajor(U,UNumber);
            else if(identity == "硕士")
                SearchMajor(P,PNumber);
            else if(identity == "博士") 
                SearchMajor(S,DNumber);
            else cout << "输入错误！" << endl;
            break;
        }
        case 3://修改信息
		{
			cout << "所修改信息人员的身份（本科/硕士/博士）：";
			string identity;
			cin >> identity;
            if(identity == "本科")
                ChangeMajor(U,UNumber);
            else if(identity == "硕士")
                ChangeMajor(P,PNumber);
            else if(identity == "博士") 
                ChangeMajor(S,DNumber);
            else cout << "输入错误！" << endl;
            break;
		}
        case 4://删除信息
		{
			cout << "所删除信息人员的身份（本科/硕士/博士）：";
			string identity;
			cin >> identity;
            if(identity == "本科")
                DeleteMajor(U,UNumber);
            else if(identity == "硕士")
                DeleteMajor(P,PNumber);
            else if(identity == "博士") 
                DeleteMajor(S,DNumber);
            else cout << "输入错误！" << endl;
            break;
		}
		case 5://保存信息
		{
			Preservation(U, UNumber);//保存本科生信息
			Preservation(P, PNumber);//保存研究生信息
			Preservation(S, DNumber);//保存教师信息
			cout << "保存信息成功！" << endl;
			cout << endl;
            break;
		}
        case 0://退出
		{
			cout << "欢迎下次使用！" << endl;
			exit(0);
		}
        default:
            break;
        }
    }
    delete U;
    delete P;
    delete S;
    return 0;
}