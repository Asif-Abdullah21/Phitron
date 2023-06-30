#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);     /// from Rahat Khan Pathaa vai ///
    
    int cnt =0;
    bool inside_word = false; //initially kono word er moddhe nai 

    for(char ch:s) // shortcut loop(Range based for loop)
    {
        if(isalpha(ch)) /// isalpha(ch) diye check kore character ta Capital ba small alphabet kina. Jodi capital char hoy taile 1 return kore ar small char er jonno 2 return kore ar egula baad e kisu hoile 0 return kore //
        {
            if(inside_word==false) cnt++; //mane ager word er moddhe nai, word theke ber hoise /// inside_word == false thaka mane bortomaan e puraton word e nai ///
            inside_word = true;
        }
        else inside_word = false;    // Jokhon alphabet baad e onno kisu pabe tokhon false kore deya hocche // ete jokhon e word er baire onno kisu pacche tokhon eta false kre dicchii inside word false mane ei char ta ager word er vitore nai
    }

    cout << cnt << endl;

    return 0;
}

//isalpha(ch) er jaygay ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) dileu hoito


//-----------------------------------------------------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);

//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i]==',' || s[i] == '?' || s[i] == '!' || s[i] == '.') s[i] = ' ';
//     }
    

//     stringstream ss;
//     ss << s;
//     int cnt=0;
//     string word;
//     while (ss>> word)
//     {
//         cnt++;
//     }
    
//     cout << cnt << endl;
//     return 0;
// }

//---------------------------------------------------------------------------


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     int cnt=1;

//     for (int i = 1; i < s.size(); i++)
//     {
//         if(s[i]==',' || s[i] == '?' || s[i] == '!' || s[i] == '.') s[i] = ' ';
   
//         if((s[i]>='A' && s[i] <= 'z') && (s[i-1]==' ')) cnt++;
//     }
    
//     cout << cnt << endl;
//     return 0;
// }


//-------------------------------------------------------------------------------


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
 
//     for (int i = 1; i < s.size(); i++)
//     {
//         if(s[i]==',' || s[i] == '?' || s[i] == '!' || s[i] == '.') s[i] = ' ';
//     }
 
//     int cnt=1;
//     for (int i = 1; i < s.size(); i++)
//     {
//         if((s[i]>='A' && s[i] <= 'z') && s[i-1]==' ') cnt++;
//     }
    
    
//     cout << cnt << endl;
//     return 0;
// }
 