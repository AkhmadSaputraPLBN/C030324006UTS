#include <iostream>
#include <thread>
#include <conio.h>
using namespace std;
int nilai[5];
int n = sizeof(nilai)/sizeof(nilai[0]);

void info(){
  system("cls");
    cout << "Nama\t: Akhmad Saputra" << endl;
    cout << "NIM\t: C030324006" << endl;
    cout << "Kelas\t: TI-2B" << endl;
  getch();
}

void isi_data(){
  system("cls");
  cout << "SILAHKAN ISI DATA" << endl << endl;
  for (int i=0; i<n; i++){
    cout << "Masukan Nilai Nomor "<< i+1 << ":";
    cin >> nilai[i];
  }
  getch();
}

void menampilkan(){
  system("cls");
  cout << "MENAMPILKAN DATA" << endl << endl;
  cout << "Nilai: ";
  for (int i=0; i<n; i++){
    cout << nilai[i] << " ";
  }
  getch();
}

void tukar(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void exchange_sort(int nilai[]){
  system("cls");
  cout << "EXCHANGE SORTING" << endl;
  cout << "Tekan huruf A untuk Ascending dan D untuk discending: ";
  char x = getch();
  switch(x){
    case 'a':{
      system("cls");
      for (int i=0; i<n-1;i++){
        for (int j=i+1; j<n; j++){
          if (nilai[i] > nilai[j]){
            tukar(&nilai[i], &nilai [j]);
          }
          for(int k=0; k<n; k++){
            cout << nilai[k] << " ";
          }
        cout << endl;
      }
      cout << endl;
    }
    cout << "ANDA BERHASIL ASCENDING" << endl;
  }
  break;

  case 'd':{
    system("cls");
    for (int i=0; i<n-1;i++){
      for(int j=i+1; j<n; j++){
        if(nilai[i] < nilai[j]){
          tukar(&nilai[i], &nilai [j]);
        }
        for(int k=0; k<n; k++){
          cout << nilai[k] << " ";
        }
        cout << endl;
      }
      cout << endl;
    }
  }
  cout << endl;
  cout << "ANDA BERHASIL DISCENDING" << endl;
  break;
  default:
  system("cls");
    cout << "Input tidak sesuai";
    break;
  }
getch();
}

void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Isi Data"<<"\n";            
cout<<"2. Menampilkan Data"<<"\n";            
cout<<"3. Exchange Shorting"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    isi_data();
    break;
   case '2':
    menampilkan();
    /* code */ 
    break;  
   case '3':
    exchange_sort(nilai);
    /* code */
    break;  
   case '4':
    info ();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}