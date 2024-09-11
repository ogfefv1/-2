//
//  main.cpp
//  дз 2
//
//  Created by Егор Джемлиханов on 08.09.2024.
//

#include <iostream>
using namespace std;

class Student
{
    char* imia;
    int god;
    int nomertel;
    char* gorod;
    char* strana;
    char* univer;
    int nomergrup;

public:
    Student()
    {
        imia = nullptr;
        god = 0;
        nomertel = 0;
        gorod = nullptr;
        strana = nullptr;
        univer = nullptr;
        nomergrup = 0;
    }

    Student(const char* Imia, int God, int Nomertel, const char* Gorod, const char* Strana, const char* Univer, int Nomergrup)
    {
        imia = new char[strlen(Imia) + 1];
        strcpy(imia, Imia);

        god = God;
        nomertel = Nomertel;

        gorod = new char[strlen(Gorod) + 1];
        strcpy(gorod, Gorod);

        strana = new char[strlen(Strana) + 1];
        strcpy(strana, Strana);

        univer = new char[strlen(Univer) + 1];
        strcpy(univer, Univer);

        nomergrup = Nomergrup;
    }

    void setImia(const char* NewImia)
    {
        if (imia != nullptr)
        {
            delete[] imia;
        }
        imia = new char[strlen(NewImia) + 1];
        strcpy(imia, NewImia);
    }

    void setGod(int newGod)
    {
        god = newGod;
    }

    void setNomertel(int NewNomertel)
    {
        nomertel = NewNomertel;
    }

    void SetGorod(const char* NewGorod)
    {
        if (gorod != nullptr)
        {
            delete[] gorod;
        }
        gorod = new char[strlen(NewGorod) + 1];
        strcpy(gorod, NewGorod);
    }

    void SetStrana(const char* NewStrana)
    {
        if (strana != nullptr)
        {
            delete[] strana;
        }
        strana = new char[strlen(NewStrana) + 1];
        strcpy(strana, NewStrana);
    }

    void SetUniver(const char* NewUniver)
    {
        if (univer != nullptr)
        {
            delete[] univer;
        }
        univer = new char[strlen(NewUniver) + 1];
        strcpy(univer, NewUniver);
    }

    void SetNomergrup(int NewNomergrup)
    {
        nomergrup = NewNomergrup;
    }

    void Input()
    {
        char buff[100];

        cout << "напишите имя: ";
        cin >> buff;
        if (imia != nullptr)
        {
            delete[] imia;
        }
        imia = new char[strlen(buff) + 1];
        strcpy(imia, buff);

        cout << "напишите год: ";
        cin >> god;

        cout << "напишите номер телефона: ";
        cin >> nomertel;

        cout << "напишите город: ";
        cin >> buff;
        if (gorod != nullptr)
        {
            delete[] gorod;
        }
        gorod = new char[strlen(buff) + 1];
        strcpy(gorod, buff);

        cout << "напишите страну: ";
        cin >> buff;
        if (strana != nullptr)
        {
            delete[] strana;
        }
        strana = new char[strlen(buff) + 1];
        strcpy(strana, buff);

        cout << "напишите университет: ";
        cin >> buff;
        if (univer != nullptr)
        {
            delete[] univer;
        }
        univer = new char[strlen(buff) + 1];
        strcpy(univer,buff);

        cout << "напишите группу: ";
        cin >> nomergrup;
    }

    void Output()
    {
        cout << "имя: " << imia << endl;
        cout << "год: " << god << endl;
        cout << "номер телефона: " << nomertel << endl;
        cout << "город: " << gorod << endl;
        cout << "страна: " << strana << endl;
        cout << "университет: " << univer << endl;
        cout << "группа: " << nomergrup << endl;
    }

    ~Student()
    {
        delete[] imia;
        delete[] gorod;
        delete[] strana;
        delete[] univer;
        cout << "удалить\n";
    }
};

int main()
{
    Student st1;
    st1.Input();
    st1.Output();

    Student st2("егор джемлиханов", 2006, 500597100, "одесса", "украина", "шаг", 231);
    st2.Output();


Student st3;
    st3.setImia("дмитрий гунько");
    st3.setGod(2004);
    st3.setNomertel(956931880);
    st3.SetGorod("николаев");
    st3.SetStrana("украина");
    st3.SetUniver("нки");
    st3.SetNomergrup(184);
    st3.Output();

    system("pause");
    return 0;
}
