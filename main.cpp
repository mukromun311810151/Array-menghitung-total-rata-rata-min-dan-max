#include <iostream>

using namespace std;

int main()
{
    int i, bil[5],jumlah,tertinggi,terendah;
    float rata;

    for(i=0;i<5;i++){
        cout<<"MAsukkAn data ke : "<<i+1<<" = ";cin>>bil[i];
    }

    cout<<"Seluruh elemen array : \n";
    jumlah=0;
    terendah=bil[0];
    tertinggi=bil[0];
    for(i=0;i<5;i++){
        cout<<bil[i]<<endl;
        jumlah=jumlah+bil[i];
        if (bil[i]<terendah){
            terendah=bil[i];
        }else if(bil[i]>tertinggi){
            tertinggi=bil[i];
        }
    }
    rata=jumlah/5;
    cout<<"Jumlah seluruh elemen Array : "<<jumlah<<endl;
    cout<<"Nilai maksimum : "<<tertinggi<<endl;
    cout<<"Nilai minimum : "<<terendah<<endl;
    cout<<"Nilai rata-rata : "<<rata<<endl;

    return 0;
}
