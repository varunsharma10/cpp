#include <iostream>
#include <string.h>
using namespace std;

class subject
{
    int sub_Id;
    char sub_Name[20];
    int sub_SemesterOffered;
    int sub_BranchOfferedBy;

public:
    int no_of_students;
    subject()
    {
        cout << "Enter subject details(id, name, semester, branch_no)::\n";
        cin >> sub_Id;
        cin >> sub_Name;
        cin >> sub_SemesterOffered;
        cin >> sub_BranchOfferedBy;
        no_of_students = 0;
    }
    char *retSubName()
    {
        return sub_Name;
    }
    int retSub(const char *tempName)
    {
        if (!strcmp(sub_Name, tempName))
            return 1;
        else
            return 0;
    }
    int ret_no_students()
    {
        return no_of_students;
    }
};

class faculty
{
    int fac_Id;
    char fac_Name[20];
    char fac_Branch[10];
    subject *teachesSub[3];
    int subTeachesCount;

public:
    faculty()
    {
        cout << "Enter faculty id, name, branch\n";
        cin >> fac_Id;
        cin >> fac_Name;
        cin >> fac_Branch;
        subTeachesCount = -1;
    }
    void subjectTeaches(subject *temp)
    {
        teachesSub[++subTeachesCount] = temp;
    }

    bool retFacultysub(const char *temp)
    {
        int f = 0;
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(teachesSub[0]->retSubName(), temp) == 0)
                f = 1;
            break;
        }
        if (f == 1)
            return true;
        else
            return false;
    }

    char *retFaculty()
    {
        return fac_Name;
    }
};

class student
{
    int std_Id, std_Semester, subRegCount;
    char std_Name[20], std_Branch[10];
    subject *registeredSub[5];

public:
    student()
    {
        cout << "Enter student details(id, name, semester, branch)\n";
        cin >> std_Id;
        cin >> std_Name;
        cin >> std_Semester;
        cin >> std_Branch;
        subRegCount = -1;
    }
    void subjectRegistration(subject *temp)
    {
        registeredSub[++subRegCount] = temp;
        temp->no_of_students++;
    }
    int retRegSub(const char *tempName)
    {
        for (int t = 0; t < subRegCount; t++)
        {
            if (!strcmp(registeredSub[t]->retSubName(), tempName))
                return 1;
        }
        return 0;
    }
    char *retStdName()
    {
        return std_Name;
    }
};
int main()
{

    subject *sub[20];
    student *stu[1000];
    faculty *fac[10];
    int i, j, k, count;
    char sName[20];

    int subCount, stdCount, facCount;
    cout << "\nEnter subCount, stdCount, facCount:: ";
    cin >> subCount >> stdCount >> facCount;
    for (i = 0; i < subCount; i++)
    {
        sub[i] = new subject();
    }
    for (i = 0; i < stdCount; i++)
    {
        stu[i] = new student();
    }
    for (i = 0; i < facCount; i++)
    {
        fac[i] = new faculty();
    }

    for (i = 0; i < stdCount; i++)
    {
        cout << "\nEnter subjects count registered by " << i + 1 << "th student:: ";
        cin >> count;
        for (j = 0; j < count; j++)
        {
            cout << "\nEnter name of " << j + 1 << "th subject to be registered:: ";
            cin >> sName;
            for (k = 0; k < subCount; k++)
            {
                if (sub[k]->retSub(sName))
                {
                    stu[i]->subjectRegistration(sub[k]);
                    break;
                }
            }
        }
    }

    for (i = 0; i < facCount; i++)
    {
        cout << "\nEnter subjects count taught by " << i + 1 << "th faculty:: ";
        cin >> count;
        for (j = 0; j < count; j++)
        {
            cout << "\nEnter name of " << j + 1 << "th subject to be taught:: ";
            cin >> sName;
            for (k = 0; k < subCount; k++)
            {
                if (sub[k]->retSub(sName))
                {
                    fac[i]->subjectTeaches(sub[k]);
                    break;
                }
            }
        }
    }
    cout << "\nQuery 1 Solution:: \n ";
    for (i = 0; i < stdCount; i++)
    {
        if (stu[i]->retRegSub("ds"))
            cout << stu[i]->retStdName() << endl;
    }
    int max = -1;
    char *max_sub;
    cout << "\nQuery 2 Solution:: ";
    for (i = 0; i < subCount; i++)
    {
        if (sub[i]->ret_no_students() > max)
        {
            max = sub[i]->ret_no_students();
            max_sub = sub[i]->retSubName();
        }
    }
    cout << "\nSubject name: " << max_sub << " with " << max << " students\n\n";
    cout << "\nQuery 3 Solution:: \n ";
    for (i = 0; i < facCount; i++)
    {
        if (fac[i]->retFacultysub(max_sub) == true)
            cout<<fac[i]->retFaculty();
            cout<<endl;
    }
    return 0;
}
