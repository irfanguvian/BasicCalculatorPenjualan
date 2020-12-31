#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>

using namespace std;
int main()
{
awal :
int harga,i,pilihanmakanan,pilihanminuman,pilihanpaket,cabe,j,k,total,kembali,bayar;
int semuamakanan=0,semuaminuman=0,semuapaket=0;
int potong[20];
int potong2[20];
int potong3[20];
int jumlah[20];
int jumlah2[20];
int jumlah3[20];
int kode[20];
int kode2[20];
int kode3[20];
char jenis[20];
char pedas[10];
char pesan,pesan2,pesan3,lagi;
    cout<<">>>>>************************************************************** SELAMAT DATANG *******************************************************************<<<<<"<<endl;
    cout<<"==========================================================================================================================================================="<<endl;
    cout<<">>>>>******************************************************** DAFTAR MENU WARUNG MANDIRI *************************************************************<<<<<"<<endl;
    cout<<"||--------------------------------------||------------------------------------||-------------------------------------------------------------------------||"<<endl;
    cout<<"||>>- MAKANAN :                         ||>>- MINUMAN :                       ||>>- PAKET :                                                              ||"<<endl;
    cout<<"||--------------------------------------||------------------------------------||------------------------------------|------------------------------------||"<<endl;
    cout<<"|| 1. Ikan Mas Bakar       Rp98.000,-   || 1. Borneo Coffee      Rp25.000,-   || 1.PAKET ORANG SUSAH      Rp6.000,- |6.PAKET KELUARGA       Rp121.800,-  ||"<<endl;
    cout<<"|| 2. Ikan Nila Bakar      Rp80.000,-   || 2. Thai Coffee        Rp20.000,-   ||   *Nasi Putih dengan Kerupuk       |  *Ikan Mas Bakar                   ||"<<endl;
    cout<<"|| 3. Nasi Goreng Kmplit   Rp30.000,-   || 3. Black Coffee       Rp20.000,-   ||   *Air Putih                       |  *3 Nasi Putih                     ||"<<endl;
    cout<<"|| 4. Bihun Goreng Komplit Rp30.000,-   || 4. Janji Jiwa Coffee  Rp20.000,-   || 2.PAKET ORANG KAYA       Rp38.500,-|  *1 Liter Es Teh Manis             ||"<<endl;
    cout<<"|| 5. Mie Goreng Komplit   Rp30.000,-   || 5. Tubruk Coffee      Rp20.000,-   ||   *Nasi Goreng Komplit             |7.PAKET MALAM MINGGU   Rp70.900,-   ||"<<endl;
    cout<<"|| 6. Nasi Goreng Seafood  Rp26.000,-   || 6. Milk Coffee        Rp18.000,-   ||   *Jus Buah                        |  *2 Pisang Bakar                   ||"<<endl;
    cout<<"|| 7. Bihun Goreng Seafood Rp26.000,-   || 7. Luwak White COffee.Rp16.000,-   || 3.PAKET KENYANG          Rp25.000,-|  *5 pcs Pisang Goreng              ||"<<endl;
    cout<<"|| 8. Mie Goreng Seafood   Rp26.000,-   || 8. Ovaltine           Rp16.000,-   ||   *Nasi putih(bebas nambah)        |  *2 Gelas Milk Coffee              ||"<<endl;
    cout<<"|| 9. Ayam Goreng Madu     Rp25.000,-   || 9. Es Kopyor          Rp15.000,-   ||   *Ayam Geprek                     |8.PAKET INDIE          Rp59.800,-   ||"<<endl;
    cout<<"|| 10.Ayam Bakar Taliwang  Rp23.000,-   || 10.Soda Gembira       Rp13.000,-   ||   *Air putih                       |  *Thai Coffe                       ||"<<endl;
    cout<<"|| 11.Ayam Geprek          Rp20.000,-   || 11.Extra Joss Susu    Rp12.000,-   || 4.PAKET SENJA            Rp28.000,-|  *Borneo Coffe                     ||"<<endl;
    cout<<"|| 12.Nasi Goreng          Rp15.000,-   || 12.Es Kelapa          Rp10.000,-   ||   *Kopi Hitam                      |  *Pisang Bakar                     ||"<<endl;
    cout<<"|| 13.Mie Goreng           Rp15.000,-   || 13.Jus Mangga         Rp10.000,-   ||   *10 pcs Pisang Goreng            |9.PAKET GAUL           Rp55.900,-   ||"<<endl;
    cout<<"|| 14.Bihun Goreng         Rp15.000,-   || 14.Jus Alpukat        Rp10.000,-   || 5.PAKET PARTY CUY        Rp99.900,-|  *Tubruk Coffe                     ||"<<endl;
    cout<<"|| 15.Pisang Bakar         Rp15.000,-   || 15.Jus Jeruk          Rp10.000,-   ||   *1 Ekor Ayam Bakar Taliwang      |  *Janji jiwa Coffe                 ||"<<endl;
    cout<<"|| 16.Nasi Putih           Rp5.000,-    || 16.Air Mineral        Rp5.000,-    ||   *1 Liter Es Teh Manis            |  *Luwak White Coffe                ||"<<endl;
    cout<<"|| 17.Pisang Goreng        Rp1.500/pcs  || 17.Es Teh Manis       Rp5.000,-    ||   *8 pcs Pisang Goreng             |                                    ||"<<endl;
    cout<<"|| 18.Pangsit Goreng       Rp1.000/pcs  || 18.Teh Tawar Hangat   Rp3.000,-    ||   *5 pcs Gorengan Pangsit          |                                    ||"<<endl;
    cout<<"||--------------------------------------||------------------------------------||------------------------------------|------------------------------------||"<<endl;

    cout<<"\nIngin pesan Paket [Y/T] :";cin>>pesan3;
    if(pesan3 == 'y' || pesan3== 'Y'){
    cout<<"Berapa jenis Paket :";cin>>pilihanpaket;
    cout<<"\n>>>>>*********************** Pilihan Paket ****************************<<<<<"<<endl;
    for(int i = 1;i<=pilihanpaket;i++){
    cout<<"Kode Paket      :";cin>>kode[i];
    if(kode[i]>9 || kode[i]< 1){
        cout<<"CODE SALAH, SILAHKAN ULANG LAGI"<<endl;
        getch();
        system("cls");
        goto awal;
    }
    cout<<"Jumlah Paket    :";cin>>potong[i];
    cout<<"-----------------------"<<endl;}
    }cout<<endl;
    cout<<"Ingin pesan Makanan [Y/T] :";cin>>pesan;
    if(pesan == 'y' || pesan== 'Y'){
    cout<<"Berapa jenis Makanan :";cin>>pilihanmakanan;
    cout<<"\n>>>>>*********************** Pilihan Makanan ****************************<<<<<"<<endl;
    for( j = 1;j<=pilihanmakanan;j++){
    cout<<"Kode Makanan      :";cin>>kode2[j];
    if(kode2[j]>18 || kode2[j]< 1){
        cout<<"CODE SALAH, SILAHKAN ULANG LAGI"<<endl;
        getch();
        system("cls");
        goto awal;
    }
    if(kode2[j]== 3 || kode2[j] == 4 || kode2[j] == 5 || kode2[j] == 6 || kode2[j] == 7 || kode2[j] == 8 ||
        kode2[j] == 12 || kode2[j] == 13 || kode2[j] == 14 ||kode2[j]== 11 ){
    cout<<"Apakah Ingen Pedas[Y/T]:"; cin>>pedas[j];}
    cout<<"Jumlah Makanan    :";cin>>potong2[j];
    cout<<"-----------------------"<<endl;}
    }cout<<endl;
    cout<<"\nIngin pesan Minuman [Y/T] :";cin>>pesan2;
    if(pesan2 == 'y' || pesan2== 'Y'){
    cout<<"Berapa jenis Minuman :";cin>>pilihanminuman;
    cout<<"\n>>>>>*********************** Pilihan Minuman ****************************<<<<<"<<endl;
    for(int k = 1;k<=pilihanminuman;k++){
    cout<<"Kode Minuman      :";cin>>kode3[k];
    if(kode3[k]>18 || kode3[k]< 1){
        cout<<"CODE SALAH, SILAHKAN ULANG LAGI"<<endl;
        getch();
        system("cls");
        goto awal;
    }
    cout<<"Jumlah Minuman    :";cin>>potong3[k];
    cout<<"-----------------------"<<endl;}
    }
    getch();
    system("cls");

cout<<"                               WARUNG NUSA MANDIRI                             "<<endl;
cout<<"                         Jl.Mandiri No.17- Jakarta Selatan                     "<<endl;
cout<<"                           Emali:mandirimantap@gmail.com                       "<<endl;
cout<<"                            Delivery Order:(021)-14069                         "<<endl;
cout<<"==============================================================================="<<endl;
cout<<"                               Bill pembayaran                                 "<<endl;
cout<<"==============================================================================="<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"  Jenis Produk                Harga       Banyak Potong    Jumlah              "<<endl;
cout<<"==============================================================================="<<endl;
if(pesan3 == 'y' || pesan3== 'Y'){
    for(k = 1;k <= pilihanpaket;k++){
     if(kode[k] == 1){
        harga =6000;
        strcpy(jenis,"PAKET ORANG SUSAH");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 2){
        harga =38500;
        strcpy(jenis,"PAKET ORANG KAYA");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 3){
        harga =20000;
        strcpy(jenis,"PAKET KENYANG");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 4){
        harga =28000;
        strcpy(jenis,"PAKET SENJA");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 5){
        harga =99900;
        strcpy(jenis,"PAKET PARTY CUY");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 6){
        harga =121800;
        strcpy(jenis,"PAKET KELUARGA");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 7){
        harga =29500;
        strcpy(jenis,"PAKET MALAM MINGGU");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 8){
        harga =59800;
        strcpy(jenis,"PAKET INDIE");
        jumlah[k] = harga * potong[k];
    }else if(kode[k] == 9){
        harga =50900;
        strcpy(jenis,"PAKET GAUL");
        jumlah[k] = harga * potong[k];
    }
printf("%-26s    Rp%-6d          %-2d         Rp%d\n",jenis,harga,potong[k],jumlah[k]);
    semuapaket += jumlah[k];
     }
}if(pesan == 'y' || pesan== 'Y'){
    for( i = 1;i <= pilihanmakanan;i++){
      if(kode2[i] == 1){
        harga =98000;
        strcpy(jenis,"Ikan Mas Bakar ");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 2){
        harga =80000;
        strcpy(jenis,"Ikan Nila Bakar");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 3){
        harga =30000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Nasi Goreng Komplit pedas");
        }else{strcpy(jenis,"Nasi Goreng Komplit");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 4){
         harga =30000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Bihun Goreng Komplit pedas");
        }else{strcpy(jenis,"Bihun Goreng Komplit");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 5){
         harga =30000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Mie Goreng Komplit pedas");
        }else{strcpy(jenis,"Mie Goreng Komplit");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 6){
         harga =26000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Nasi Goreng Seafood pedas");
        }else{strcpy(jenis,"Nasi Goreng Seafood");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 7){
         harga =26000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Mie Goreng Seafood pedas");
        }else{strcpy(jenis,"Mie Goreng Seafood");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 8){
         harga =26000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Bihun Goreng Seafood pedas");
        }else{strcpy(jenis,"Bihun Goreng Seafood");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 9){
        harga =25000;
        strcpy(jenis,"Ayam Goreng Madu");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 10){
        harga =23000;
        strcpy(jenis,"Ayam Bakar Taliwang");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 11){
        harga =20000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Ayam Geprek pedas");
        }else{strcpy(jenis,"Ayam Geprek");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 12){
        harga =15000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Nasi Goreng pedas");
        }else{strcpy(jenis,"Nasi Goreng");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 13){
        harga =15000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Mie Goreng pedas");
        }else{strcpy(jenis,"Mie goreng");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 14){
        harga =15000;
        if(pedas[i]=='y'||pedas[i]=='Y'){
        strcpy(jenis,"Bihun Goreng pedas");
        }else{strcpy(jenis,"Bihun Goreng");}
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 15){
        harga =15000;
        strcpy(jenis,"Pisang Bakar");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 16){
        harga =5000;
        strcpy(jenis,"Nasi Putih");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 17){
        harga =1500;
        strcpy(jenis,"Pisang Goreng");
        jumlah2[i] = harga * potong2[i];
    }else if(kode2[i] == 18){
        harga =1000;
        strcpy(jenis,"Pangsit Goreng");
        jumlah2[i] = harga * potong2[i];
    }
printf("%-26s    Rp%-6d          %-2d         Rp%d\n",jenis,harga,potong2[i],jumlah2[i]);
    semuamakanan += jumlah2[i];
    }
    }
    if(pesan2 == 'y' || pesan2== 'Y'){
    for(j = 1;j <= pilihanminuman;j++){
    if(kode3[j] == 1){
       harga =25000;
       strcpy(jenis,"Borneo coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 2){
       harga =20000;
       strcpy(jenis,"Thai coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 3){
       harga =20000;
       strcpy(jenis,"Black coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 4){
       harga =20000;
       strcpy(jenis,"Janji Jiwa coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 5){
       harga =20000;
       strcpy(jenis,"Tubruk Coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 6){
       harga =18000;
       strcpy(jenis,"Milk coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 7){
       harga =16000;
       strcpy(jenis,"Luwak White coffee");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 8){
       harga =16000;
       strcpy(jenis,"Ovaltine");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 9){
       harga =15000;
       strcpy(jenis,"Es Kopyor");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 10){
       harga =13000;
       strcpy(jenis,"Soda Gembira");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 11){
       harga =12000;
       strcpy(jenis,"Extra Joss Susu");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 12){
       harga =10000;
       strcpy(jenis,"Es Kelapa");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 13){
       harga =10000;
       strcpy(jenis,"Jus Mangga");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 14){
       harga =10000;
       strcpy(jenis,"Jus Alpukat");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 15){
       harga =10000;
       strcpy(jenis,"Jus Jeruk");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 16){
       harga =5000;
       strcpy(jenis,"Air Mineral");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 17){
       harga =5000;
       strcpy(jenis,"Es Teh Manis");
       jumlah3[j] = harga * potong3[j];
    }else if(kode3[j] == 18){
       harga =3000;
       strcpy(jenis,"Teh Tawar Hangat");
       jumlah3[j] = harga * potong3[j];
    }
printf("%-26s    Rp%-6d          %-2d         Rp%d\n",jenis,harga,potong3[j],jumlah3[j]);
        semuaminuman += jumlah3[j];
}
}
cout<<"=============================================================================="<<endl;
total = semuamakanan + semuaminuman + semuapaket;
cout<<"                                            Total   :Rp"<<total<<endl;
cout<<"                                            Bayar   :Rp";cin>>bayar;
kembali = bayar - total;
cout<<"                                            Kembali :Rp"<<kembali<<endl;
cout<<"=============================================================================="<<endl;
cout<<"                         ******SELAMAT MENIKMATI******                        "<<endl;
cout<<"                                   LAPER???                                   "<<endl;
cout<<"                           WARUNG MANDIRI TEMPATNYA                           "<<endl;
getch();
cout<<"\n\n Ulang Program[Y/T]:";cin>>lagi;
if(lagi == 'y'|| lagi== 'Y'){
    system("cls");
    goto awal;
}

getch();
return 0;
}
