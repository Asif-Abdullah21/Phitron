#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[101];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    char cntry[101] = "India";
    strcpy(dhoni->country,cntry);
    dhoni->jersey_no = 18;

    Cricketer *kohli = new Cricketer;
    
    //kohli = dhoni; //emn korle kohli er moddhe dhonir adress ditese, tai dhoni delete(oi adress delete hoye jbe) krle kohli o r access krte partese na
    
    *kohli = *dhoni; // kohli variable gulate dhonir variable er value gula copy ba pass kore dilam

    cout << kohli->jersey_no << endl; //  cout << (*kohli).jersey_no << endl;
    cout << kohli->country << endl;

    delete dhoni;

    cout << kohli->jersey_no << endl;//18 //kohli = dhoni; dile delete er por r access krte partam na
    cout << kohli->country << endl; //India

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// class Cricketer
// {
//     public:
//         int jersey_no;
//         char country[100];
// };

// int main()
// {
//     Cricketer *dhoni = new Cricketer;
//     dhoni->jersey_no = 7;

//     char c[100] = "India";
//     strcpy(dhoni->country, c);

//     Cricketer *kohli = new Cricketer;
    
//     strcpy(kohli->country,dhoni->country);
//     kohli->jersey_no = dhoni->jersey_no;

//     delete dhoni;

//     cout << kohli->country << endl;    
//     cout << kohli->jersey_no << endl;

//     // cout << dhoni->country << endl;    
//     // cout << dhoni->jersey_no << endl;    

//     return 0;
// }


/*
Rahat khan pathan vai's comment:

1. kohli=dhoni likhle dhoni er memory kohli ke dibe.. dhoni delete korle kohli er moddhe r kichu pawa jabe na..
2. *kohli=*dhoni korle dhoni er object er value kohli te copy hobe.. tar mane dhoni delete korleo kohli er somossha nei cz object copy hoyeche..
3. kohli->jersey_no=dhoni->jersey_no korleo same object er value copy hocche.. dhoni delete korleo somossha nai..


*/