#include<iostream>
#include<fstream>
using namespace std;

//����
class Person
{
public:
    string classNum;        //ѧ��
    string studName;        //����
    string gender;          //�Ա�
    string birthday;        //��������
    string origin;          //����
    string address;         //��ͥסַ
    string parentsName;     //�ҳ�����
    string parentsNum;      //�ҳ��绰
    string studNum;         //ѧ���绰
    string grade;           //�꼶
    string major;           //רҵ
    string classroom;       //�༶
    string research;        //�о�����
	string tutor;           //��ʦ����
	virtual void Input() = 0;//������Ϣ
	virtual void putout() = 0;//�����Ϣ
	virtual void Save() = 0;//������Ϣ
};

//������
class UnderGraduate:public Person
{
public:
    void Input()            //����
    {
        cout << "\t\tѧ�ţ�";
		cin >> classNum;
		cout << "\t\t������";
		cin >> studName;
		cout << "\t\t�Ա�";
		cin >> gender;
		cout << "\t\t�������£�";
		cin >> birthday;
        cout << "\t\t�꼶��";
		cin >> grade;
		cout << "\t\tרҵ��";
		cin >> major;
		cout << "\t\t�༶��";
		cin >> classroom;
		cout << "\t\t���᣺";
		cin >> origin;
		cout << "\t\tѧ���绰��";
		cin >> studNum;
		cout << "\t\t��ͥסַ��";
		cin >> address;
		cout << "\t\t�ҳ�������";
		cin >> parentsName;
		cout << "\t\t�ҳ��绰��";
		cin >> parentsNum;
    }

    void putout()               //���
    {
        cout << "\t\tѧ�ţ�" << classNum << endl;
		cout << "\t\t������" << studName << endl;
		cout << "\t\t�Ա�" << gender << endl;
		cout << "\t\t�������£�" << birthday << endl;
        cout << "\t\t�꼶��" << grade << endl;
		cout << "\t\tרҵ��" << major << endl;
		cout << "\t\t�༶��" << classroom << endl;
		cout << "\t\t���᣺" << origin << endl;
		cout << "\t\tѧ���绰��" << studNum << endl;
		cout << "\t\t��ͥסַ��" << address << endl;
		cout << "\t\t�ҳ�������" << parentsName << endl;
		cout << "\t\t�ҳ��绰��" << parentsNum << endl;
    }

    void Save()                 //����
    {
        ofstream outfile("������.txt",ios::app);
        outfile << "ѧ�ţ�" << classNum << endl;
		outfile << "������" << studName << endl;
		outfile << "�Ա�" << gender << endl;
		outfile << "�������£�" << birthday << endl;
        outfile << "�꼶��" << grade << endl;
		outfile << "רҵ��" << major << endl;
		outfile << "�༶��" << classroom << endl;
		outfile << "���᣺" << origin << endl;
		outfile << "ѧ���绰��" << studNum << endl;
		outfile << "��ͥסַ��" << address << endl;
		outfile << "�ҳ�������" << parentsName << endl;
		outfile << "�ҳ��绰��" << parentsNum << endl;
        outfile.close();
    }
};

//˶ʿ�о���
class PostGraduate:public Person
{
public:
    void Input()            //����
    {
        cout << "\t\tѧ�ţ�";
		cin >> classNum;
		cout << "\t\t������";
		cin >> studName;
		cout << "\t\t�Ա�";
		cin >> gender;
		cout << "\t\t�������£�";
		cin >> birthday;
        cout << "\t\t�꼶��";
		cin >> grade;
		cout << "\t\tרҵ��";
		cin >> major;
		cout << "\t\t�༶��";
		cin >> classroom;
        cout << "\t\t�о�����";
		cin >> research;
		cout << "\t\t��ʦ������";
		cin >> tutor;
		cout << "\t\t���᣺";
		cin >> origin;
		cout << "\t\tѧ���绰��";
		cin >> studNum;
		cout << "\t\t��ͥסַ��";
		cin >> address;
		cout << "\t\t�ҳ�������";
		cin >> parentsName;
		cout << "\t\t�ҳ��绰��";
		cin >> parentsNum;
    }

    void putout()               //���
    {
        cout << "ѧ�ţ�" << classNum << endl;
		cout << "������" << studName << endl;
		cout << "�Ա�" << gender << endl;
		cout << "�������£�" << birthday << endl;
        cout << "�꼶��" << grade << endl;
		cout << "רҵ��" << major << endl;
		cout << "�༶��" << classroom << endl;
        cout << "�о�����" << research << endl;
		cout << "��ʦ������" << tutor << endl;
		cout << "���᣺" << origin << endl;
		cout << "ѧ���绰��" << studNum << endl;
		cout << "��ͥסַ��" << address << endl;
		cout << "�ҳ�������" << parentsName << endl;
		cout << "�ҳ��绰��" << parentsNum << endl;
    }

    void Save()                 //����
    {
        ofstream outfile ("˶ʿ�о���.txt",ios::app);
        outfile << "ѧ�ţ�" << classNum << endl;
		outfile << "������" << studName << endl;
		outfile << "�Ա�" << gender << endl;
		outfile << "�������£�" << birthday << endl;
        outfile << "�꼶��" << grade << endl;
		outfile << "רҵ��" << major << endl;
		outfile << "�༶��" << classroom << endl;
		outfile << "�о�����" << research << endl;
		outfile << "��ʦ������" << tutor << endl;
		outfile << "���᣺" << origin << endl;
		outfile << "ѧ���绰��" << studNum << endl;
		outfile << "��ͥסַ��" << address << endl;
		outfile << "�ҳ�������" << parentsName << endl;
		outfile << "�ҳ��绰��" << parentsNum << endl;
        outfile.close();
    }
};

//��ʿ�о���
class DoctoralStudent:public Person
{
public:
    void Input()            //����
    {
        cout << "\t\tѧ�ţ�";
		cin >> classNum;
		cout << "\t\t������";
		cin >> studName;
		cout << "\t\t�Ա�";
		cin >> gender;
		cout << "\t\t�������£�";
		cin >> birthday;
        cout << "\t\t�꼶��";
		cin >> grade;
		cout << "\t\tרҵ��";
		cin >> major;
		cout << "\t\t�༶��";
		cin >> classroom;
        cout << "\t\t�о�����";
		cin >> research;
		cout << "\t\t��ʦ������";
		cin >> tutor;
		cout << "\t\t���᣺";
		cin >> origin;
		cout << "\t\tѧ���绰��";
		cin >> studNum;
		cout << "\t\t��ͥסַ��";
		cin >> address;
		cout << "\t\t�ҳ�������";
		cin >> parentsName;
		cout << "\t\t�ҳ��绰��";
		cin >> parentsNum;
    }

    void putout()               //���
    {
        cout << "\t\tѧ�ţ�" << classNum << endl;
		cout << "\t\t������" << studName << endl;
		cout << "\t\t�Ա�" << gender << endl;
		cout << "\t\t�������£�" << birthday << endl;
        cout << "\t\t�꼶��" << grade << endl;
		cout << "\t\tרҵ��" << major << endl;
		cout << "\t\t�༶��" << classroom << endl;
        cout << "\t\t�о�����" << research << endl;
		cout << "\t\t��ʦ������" << tutor << endl;
		cout << "\t\t���᣺" << origin << endl;
		cout << "\t\tѧ���绰��" << studNum << endl;
		cout << "\t\t��ͥסַ��" << address << endl;
		cout << "\t\t�ҳ�������" << parentsName << endl;
		cout << "\t\t�ҳ��绰��" << parentsNum << endl;
    }

    void Save()                 //����
    {
        ofstream outfile ("��ʿ�о���.txt",ios::app);
        outfile << "ѧ�ţ�" << classNum << endl;
		outfile << "������" << studName << endl;
		outfile << "�Ա�" << gender << endl;
		outfile << "�������£�" << birthday << endl;
        outfile << "�꼶��" << grade << endl;
		outfile << "רҵ��" << major << endl;
		outfile << "�༶��" << classroom << endl;
		outfile << "�о�����" << research << endl;
		outfile << "��ʦ������" << tutor << endl;
		outfile << "���᣺" << origin << endl;
		outfile << "ѧ���绰��" << studNum << endl;
		outfile << "��ͥסַ��" << address << endl;
		outfile << "�ҳ�������" << parentsName << endl;
		outfile << "�ҳ��绰��" << parentsNum << endl;
        outfile.close();
    }
};

//������
void InterFace()
{
    cout << ">>>>>>>>>>>>>>��ӭʹ�ø�Уѧ����ϵ��ʽ����ϵͳ<<<<<<<<<"<<endl;
    cout << "*****************************************************" << endl;
    cout << "*                     1.�����Ϣ                  *" << endl;
    cout << "*                     2.������Ϣ                  *" << endl;
    cout << "*                     3.�޸���Ϣ                  *" << endl;
    cout << "*                     4.ɾ����Ϣ                  *" << endl;
    cout << "*                     5.������Ϣ                  *" << endl;
    cout << "*                     0.�˳�ϵͳ                  *" << endl;
    cout << "*****************************************************" << endl;
    cout << "��ܰ��ʾ��--�˳�ǰ��ȷ��������Ϣ�ѱ���--" << endl;
    cout << "         --�������������Ϣ���ٽ��б���--" << endl;
    cout << "         --�������˳�ǰ�ٽ��б���--" << endl;
    cout << "��ѡ��Ҫִ�еĲ�����";
}

//ѧ����Ϣ��ѯ����
void SearchStudInterface()
{
    cout << endl;
	cout << ">>>>>>>>>>��ѯ��ʽ<<<<<<<<<<" << endl;
	cout << "*         1��רҵ          *" << endl;
	cout << "*         2���༶          *" << endl;
	cout << "*         3��ѧ��          *" << endl;
	cout << "****************************" << endl;
	cout << "��ѡ���ѯ��ʽ��";
}

template <typename T>//��̬���麯��ģ��
void Change(T*& identity, int oldlength, int newlength)
{
	T* temp = new T[newlength];
	int number = min(oldlength, newlength);
	copy(identity, identity + number, temp); 
	delete[]identity;
	identity = temp;
}

template<typename T>//�����Ϣ����ģ��
void Get(T& identity, int& oldlength)
{
    cout << "��������Ҫ��ӵ�ѧ����ѧ�ţ�";
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
                cout << "��ѧ���Ѿ����ڣ����������룡" << endl;
                break;
            }
            else
                continue;
        }
        if(i < oldlength)
        {
            n = 1;
            cout << "��������Ҫ��ӵ�ѧ����ѧ�ţ�";
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

template<typename T>//ɾ����Ϣ����ģ��
void Delete(T& identity, int& oldlength,int number)
{
	cout << endl;
	cout << ">>>>>>>>>>��ȷ���Ƿ�ɾ��<<<<<<<<<<" << endl;
	cout << "*            1��ȷ��             *" << endl;
	cout << "*            2������             *" << endl;
	cout << "**********************************" << endl;
	cout << "������ѡ��ɾ�����޷��ָ���";
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
		cout << "ɾ���ɹ���" << endl;
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

template<typename T>//������Ϣ����ģ��
void Preservation(T identity,int oldlength)
{
	for (int i = 0; i < oldlength; i++)
	{
		identity[i].Save();
	}
}

//ͳ�Ʊ������ı������б�����������
int UGive()
{
	char c;
	int n = 0;
	ifstream uinfile("������1.dat", ios::in);
	while (uinfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	uinfile.close();
	return n%13;
}

//ͳ���о����ı��������о���������
int PGive()
{
	char c;
	int n = 0;
	ifstream ginfile("˶ʿ�о���.dat", ios::in);
	while (ginfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	ginfile.close();
	return n%13;
}

//ͳ�ƽ�ʦ�ı������н�ʦ������
int DGive()
{
	char c;
	int n = 0;
	ifstream tinfile("��ʿ�о���.dat", ios::in);
	while (tinfile.get(c))
	{
		if (c == '\n')
			n++;
	}
	tinfile.close();
	return n%13;
}

template <typename T>       //��ѯ��Ϣ
void SearchMajor(T* A,int m)
{
    SearchStudInterface();
    int way;
    cin >> way;
    switch(way)
    {
        case 1:
        {
            cout << "������ѧ����רҵ��";
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
                cout << "���޴�רҵ���רҵ����" << endl;
            }
            else
                cout << "��רҵ������" << n << endl;
            break;
        }
        case 2:
        {
            cout << "������ѧ���İ༶��";
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
                cout << "���޴˰༶��˰༶����" << endl;
            }
            else
                cout << "���༶������" << n << endl;
            break;
        }
        case 3:
        {
            cout << "������ѧ����ѧ�ţ�";
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
                cout << "���޴�ѧ���������ѧ��ѧ�Ŵ���" << endl;
            }
            break;
        }
        default:
        break;
    }
}

template <typename T>       //�޸���Ϣ
void ChangeMajor(T* A,int m)
{
    cout << "���������޸�ѧ����ѧ�ţ�";
    string Fnumber;
    cin >> Fnumber;
    cout << endl;
    int n = 0;
    for (int i = 0; i < m; i++)
    {
        if (A[i].classNum == Fnumber)
        {
            cout << "��ʼ�޸���Ϣ" << endl;
            A[i].Input();
            cout <<"�޸���Ϣ�ɹ���"<< endl;
            n = 1;
            break;
        }
        else
            continue;
    }
    if (n == 0)
        cout << "�޴�ѧ���������ѧ��ѧ�Ŵ���" << endl;
}

template <typename T>       //ɾ����Ϣ
void DeleteMajor(T* A,int m)
{
    cout << "��������ɾ��ѧ����ѧ�ţ�";
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
        cout << "�޴�ѧ���������ѧ��ѧ�Ŵ���" << endl;
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
        case 1://�����Ϣ
        {
            cout << "�������Ϣ��Ա����ݣ�������/˶ʿ/��ʿ����";
			string identity;
			cin >> identity;
			if (identity == "������")
			{
				Get(U, UNumber);
				cout << "��ӱ�������Ϣ�ɹ���" << endl;
			}
			else if (identity == "˶ʿ")
			{
				Get(P, PNumber);
				cout << "���˶ʿ�о�����Ϣ�ɹ���" << endl;
			}
			else if (identity == "��ʿ")
			{
				Get(S, DNumber);
				cout << "��Ӳ�ʿ�о�����Ϣ�ɹ���" << endl;
			}
			cout << endl;
            break;
        }
        case 2://������Ϣ
        {
            cout << "��������Ϣ��Ա����ݣ�����/˶ʿ/��ʿ����";
			string identity;
			cin >> identity;
            if(identity == "����")
                SearchMajor(U,UNumber);
            else if(identity == "˶ʿ")
                SearchMajor(P,PNumber);
            else if(identity == "��ʿ") 
                SearchMajor(S,DNumber);
            else cout << "�������" << endl;
            break;
        }
        case 3://�޸���Ϣ
		{
			cout << "���޸���Ϣ��Ա����ݣ�����/˶ʿ/��ʿ����";
			string identity;
			cin >> identity;
            if(identity == "����")
                ChangeMajor(U,UNumber);
            else if(identity == "˶ʿ")
                ChangeMajor(P,PNumber);
            else if(identity == "��ʿ") 
                ChangeMajor(S,DNumber);
            else cout << "�������" << endl;
            break;
		}
        case 4://ɾ����Ϣ
		{
			cout << "��ɾ����Ϣ��Ա����ݣ�����/˶ʿ/��ʿ����";
			string identity;
			cin >> identity;
            if(identity == "����")
                DeleteMajor(U,UNumber);
            else if(identity == "˶ʿ")
                DeleteMajor(P,PNumber);
            else if(identity == "��ʿ") 
                DeleteMajor(S,DNumber);
            else cout << "�������" << endl;
            break;
		}
		case 5://������Ϣ
		{
			Preservation(U, UNumber);//���汾������Ϣ
			Preservation(P, PNumber);//�����о�����Ϣ
			Preservation(S, DNumber);//�����ʦ��Ϣ
			cout << "������Ϣ�ɹ���" << endl;
			cout << endl;
            break;
		}
        case 0://�˳�
		{
			cout << "��ӭ�´�ʹ�ã�" << endl;
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