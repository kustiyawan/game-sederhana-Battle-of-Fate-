#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{

    int AcakNasib, acakKomp, tebaknya;
    string Player1 ;
    string Player2 ;
    int pilihanMain = 0;

    awal:
        srand(static_cast<unsigned int>(time(0)));
        acakKomp = rand() %3 +1;
        AcakNasib = rand() %10 + 1;

        cout << endl;
        cout << "=============================== Battle of Fate (Permainan adu Nasib) ==============================="<< endl;
        cout << "=============================== Permainan Adu Nasib dengan Adu Tebak ===============================\n"<< endl;

        cout << "Ketentuan, Jalani Biar Seru\n";
        cout << "1. Kedua belah pihak harus saling sepakat dengan hukuman\n";
        cout << "2. Hukuman yang ditentukan sistem harus dilakukan biar seru\n";

        cout << endl;
        cout << "Aturan Main\n";
        cout << "1. Pemain yang dapet giliran dipersilahkan untuk Menebak 3 makhluk\n";
        cout << "2. Jika benar pemain akan di beri 2 pilihan ingin menyerang atau bertahan\n";
        cout << "3. Jika memilih serang HP lawan akan -1, jika memilih bertahan HP pemain akan +1\n";
        cout << "4. nah ini agak tricky andaikan salah menebak HP pemain akan -1\n";
        cout << endl;
        cout << "\t\t =========== Oke sip itu aja, Selamat berAdu Nasib ria :) ===========";

        cout << endl;

        cout << "Mulai\n";
        cout << "[1]. Single Player\n";
        cout << "[2]. Multiplayer\n";
        cout << "[3]. Exit\n";
        cout << "\n";

        cout << "Pilih Mode (tekan 1/2) : ";

        cin >> pilihanMain;

        switch (pilihanMain){
            case 1 : {

                mbaleni:
                int pemainMilih, kompMilih;
                int nyowoPemain = 5;
                int nyowoKomp = 5;
                tebaknya = rand() %3 +1;
                kompMilih = rand() %3 +1;
                string penantang, pemain;

                char maneh = 'y';
                cout << endl;
                cout << "===== Single Player =====\n";

                while (maneh == 'y'){
                    cout << endl;
                    cout << "Nama Penantang : "; cin >> penantang;
                    cout << "Yang lagi main : "; cin >> pemain;

                    cout << endl;
                    cout << "Pemilihan tebakan nya \n";
                    cout << "1. Gajah\n";
                    cout << "2. Semot\n";
                    cout << "3. Menungso\n";
                    cout << "Sesuai No urut nya\n";

                    while (nyowoPemain > 0 && nyowoKomp > 0) {
                        cout << endl;
                        cout << "Kita Lihat lagi kondisi nya\n";
                        cout << "Nyawa Ente : " << nyowoPemain << endl;
                        cout << "Nyawa Komputer : " << nyowoKomp << endl;

                        cout << "\n";
                        cout << endl;
                        cout << "Pemain pilih makloq idop : "; cin >> pemainMilih;

                        if (pemainMilih > 3) {
                            cout << "oh maaf, Sepertinya Sampeyan salah pilih\n";
                            cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> pemainMilih;

                            while (pemainMilih > 3) {
                                cout << "Ya ampun, kenapa salah pilih maneh\n";
                                cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> pemainMilih;
                            }

                        }
                        cout << endl;

                        if (pemainMilih == tebaknya) {

                            if (pemainMilih == 1){
                                cout << "\t Ternyata Gajah\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            } else if (pemainMilih == 2){
                                cout << "\t Ternyata Semot\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            } else if (pemainMilih == 3) {
                                cout << "\t Ternyata Manusia\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            }

                            int serangBertahan;

                            cout << endl;
                            cout << "\t\t pilihan " << pemain << " benar\n";
                            cout << "\t\t pilih 1 jika ingin menyerang lawan (HP lawan dikurangi -1)\n";
                            cout << "\t\t pilih 2 jika ingin menambah HP (HP akan ditambah +1)\n ";
                            cout << "\t\t Pilih Aksi : "; cin >> serangBertahan;

                            if (serangBertahan == 1){
                                nyowoKomp--;
                            }
                            else {
                                nyowoPemain++;
                            }

                        }
                        else {

                            if (tebaknya == 1){
                                cout << "\t Ternyata Gajah\n";

                                cout << endl;

                            } else if (tebaknya == 2){
                                cout << "\t Ternyata Semot\n";

                                cout << endl;

                            } else if (tebaknya == 3) {
                                cout << "\t Ternyata Manusia\n";

                                cout << endl;

                            }
                            cout << endl;
                            cout << "\t\tacchhh " << pemain <<" gagal tebak HP dikurangi -1\n";
                            nyowoPemain--;
                        }
                        cout << "==========kondisi==========\n";
                        cout << "Nyawa Ente : " << nyowoPemain << endl;
                        cout << "Nyawa Komputer : " << nyowoKomp << endl;

                        cout << endl;

                        cout << "\t\t Giliran Komputer\n";

                        cout << endl;

                        if (kompMilih == tebaknya){
                            int kompNyerang;
                            kompNyerang = rand() %2 +1;

                            cout << endl;
                            cout << "walah Komputer nya bener menebak\n";
                            cout << "Komputer Memilih : " << kompNyerang << endl;
                            if (kompNyerang == 1){
                                nyowoPemain--;
                            }
                            else {
                                nyowoKomp++;
                            }
                        }
                        else {
                            cout << endl;
                            cout << "\t\tacchhh komputer gagal tebak HP dikurangi -1\n";
                            nyowoKomp--;

                        }
                        cout << endl;
                        cout << "==========kondisi==========\n";
                        cout << "Nyawa Ente \t: " << nyowoPemain << std::endl;
                        cout << "Nyawa Komputer \t: " << nyowoKomp << std::endl;
                    }

                    if (nyowoPemain > 0 && nyowoKomp < 1){
                        cout << "\t\t Hasil dari Pertandingan Iseng isengan\n";
                        cout << "\t HP dari " << pemain << " adalah => " << nyowoPemain;
                        cout << endl;
                        cout << "\t HP dari Komputer adalah => 0";
                        cout << "\t Dadine si "<< pemain << " MENANG";
                        cout << endl;

                        /// sekarang Nasibnya
                        if (AcakNasib == 1){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << pemain << " harus menampar " << penantang;
                            }
                            else if (AcakNasib == 2){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << pemain << " harus mencoret wajah " << penantang;
                            }
                            else if (AcakNasib == 3){
                                cout << "\t Nasib :";
                                cout << "\n\t si "<< pemain << " harus menabok wajah "<< penantang;
                            }
                            else if (AcakNasib == 4){
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus menyolek potongan cabe di bibir " << penantang;
                            }
                            else if (AcakNasib == 5) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus menabur bedak ke muka si " << penantang;
                            }
                            else if (AcakNasib == 6) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " memijat punggung si " << pemain;
                            }
                            else if (AcakNasib == 7) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus mengoles seluruh wajah langsung dengan telapak tangan si " << penantang << " dengan bedak";
                            }
                            else if (AcakNasib == 8) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus membelikan makanan pada si " << pemain;
                            }
                            else if (AcakNasib == 9) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus push up 10x";
                            }
                            else if (AcakNasib == 10) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus sit up 10x";
                            }
                    }
                    else if (nyowoKomp > 0 && nyowoPemain < 1) {
                        cout << "\t\t Hasil dari Pertandingan Iseng isengan\n";
                        cout << "\t HP dari " << pemain << " adalah => 0";
                        cout << endl;
                        cout << "\t HP dari Komputer adalah => " << nyowoKomp;
                        cout << "\t Dadine Komputer MENANG";
                        cout << endl;

                        if (AcakNasib == 1){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << penantang << " harus menampar " << pemain;
                            }
                            else if (AcakNasib == 2){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << penantang << " harus mencoret wajah " << pemain;
                            }
                            else if (AcakNasib == 3){
                                cout << "\t Nasib :";
                                cout << "\n\t si "<< penantang << " harus menabok wajah "<< pemain;
                            }
                            else if (AcakNasib == 4){
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus menyolek potongan cabe di bibir " << pemain;
                            }
                            else if (AcakNasib == 5) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus menabur bedak ke muka si " << pemain;
                            }
                            else if (AcakNasib == 6) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " memijat punggung si " << penantang;
                            }
                            else if (AcakNasib == 7) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< penantang << " harus mengoles seluruh wajah langsung dengan telapak tangan si " << pemain << " dengan bedak";
                            }
                            else if (AcakNasib == 8) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus membelikan makanan pada si " << penantang;
                            }
                            else if (AcakNasib == 9) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus push up 10x";
                            }
                            else if (AcakNasib == 10) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< pemain << " harus sit up 10x";
                            }
                    }
                    else if (nyowoPemain == 0 && nyowoKomp == 0){
                        cout << endl;
                        cout << "\nOwalah Seri \n";
                        cout << "Ra nok Adu Nasib\n";
                        cout << endl;
                    }

                    cout << endl;
                    cout << "\n Nantang Maneh (y/n) ? ";
                    cin >> maneh;
                    if (maneh == 'y'){
                        getchar();
                        system ("cls");
                        goto mbaleni;
                    }
                    else if (maneh != 'y'){

                        getchar();
                        system("cls");
                        goto awal;
                    }
                }
            }
            break;

            case 2: {
                ulang :
                int pertamaPilih , HPplayer1 = 5;
                int keduaPilih, HPplayer2 = 5;

                int tebaknyaV2;
                tebaknyaV2 = rand() %3 +1;

                char ngulang = 'y';
                cout << endl;

                system ("cls");

                cout << "\t\t ===== Multi Player =====\n";

                cout << endl;
                cout << "Suit Dulu Klean ya untuk menentukan pemain pertama\n";
                cout << endl;

                cout << "Pemain Pertama Siapa Namamu\t : "; cin >> Player1;
                cout << "Pemain Kedua Sopo Jenengmu\t : "; cin >> Player2;

                while (ngulang == 'y'){

                    cout << "\t\t ===== Multi Player =====\n";
                    cout << endl;
                    cout << "Pemilihan Tebakan nya \n";
                    cout << "1. Gajah\n";
                    cout << "2. Semot\n";
                    cout << "3. Menungso\n";
                    cout << "pilih Entitas dengan menekan 1/2/3 kemudian enter\n";

            ///Bagian Pemain Pertama Memilih

                    while (HPplayer1 > 0 && HPplayer2 > 0) {
                        cout << endl;
                        cout << "Kita Lihat lagi kondisi nya\n";
                        cout << "Nyawa si " << Player1 << " : " << HPplayer1 << endl;
                        cout << "Nyawa si " << Player2 << " : " << HPplayer2 << endl;

                        cout << "\n";
                        cout << endl;

                        cout << "yok si " << Player1 <<" pilih makloq idop : "; cin >> pertamaPilih;
                        if (pertamaPilih > 3) {
                            cout << "oh maaf, Sepertinya Sampeyan salah pilih\n";
                            cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> pertamaPilih;

                            while (pertamaPilih > 3) {
                                cout << "Ya ampun, kenapa salah pilih maneh\n";
                                cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> pertamaPilih;
                            }

                        }

                        cout << endl;

                        if (pertamaPilih == tebaknyaV2) {

                            if (pertamaPilih == 1){
                                cout << "\t Ternyata Gajah\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            } else if (pertamaPilih == 2){
                                cout << "\t Ternyata Semot\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            } else if (pertamaPilih == 3) {
                                cout << "\t Ternyata Manusia\n";
                                cout << "\t Sip Tebakanmu Bener\n";
                                cout << endl;

                            }

                            int nyerangTahan;

                            cout << endl;
                            cout << "\t\t pilihan " << Player1 << " benar\n";
                            cout << "\t\t pilih 1 jika ingin menyerang lawan (HP lawan dikurangi -1)\n";
                            cout << "\t\t pilih 2 jika ingin menambah HP (HP akan ditambah +1)\n ";
                            cout << "\t\t Pilih Aksi : "; cin >> nyerangTahan;

                            if (nyerangTahan == 1){
                                HPplayer2--;
                            }
                            else {
                                HPplayer1++;
                            }
                        }

                        else {

                            if (tebaknyaV2 == 1){
                                cout << "\t Ternyata Gajah\n";

                                cout << endl;

                            } else if (tebaknyaV2 == 2){
                                cout << "\t Ternyata Semot\n";

                                cout << endl;

                            } else if (tebaknyaV2 == 3) {
                                cout << "\t Ternyata Manusia\n";

                                cout << endl;

                            }
                            cout << endl;
                            cout << "\t\tacchhh " << Player1 <<" gagal tebak, HP dikurangi -1\n";
                            HPplayer1--;
                        }

                        cout << "==========kondisi==========\n";
                        cout << "Nyawa si " << Player1 <<" : " << HPplayer1 << endl;
                        cout << "Nyawa si " << Player2 << " : " << HPplayer2 << endl;

                        cout << endl;

                        if (HPplayer1 < 1 || HPplayer2 <1 ) {
                            cout << "wah nyawa nya ada yg udah nol nich\n";
                            cout << endl;
                        }
                        else {
                            cout << "\t\t Giliran " << Player2 << endl;
                            cout << endl;

                    /// Bagian Pemain kedua memilih

                            cout << "Pemilihan Tebakan nya \n";
                            cout << "1. Gajah\n";
                            cout << "2. Semot\n";
                            cout << "3. Menungso\n";
                            cout << "pilih Entitas dengan menekan 1/2/3 kemudian enter\n";
                            cout << endl;

                            cout << "yok pilih Entitas opo : "; cin >> keduaPilih;
                            cout << endl;

                            if (keduaPilih > 3) {
                                cout << "oh maaf, Sepertinya Sampeyan salah pilih\n";
                                cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> keduaPilih;

                                while (keduaPilih > 3) {
                                    cout << "Ya ampun, kenapa salah pilih maneh\n";
                                    cout << "Ulangi lagi ya, Yuk Pilih apa => "; cin >> keduaPilih;
                                }

                            }

                            if (keduaPilih == tebaknyaV2) {

                                if (keduaPilih == 1){
                                    cout << "\t Ternyata Gajah\n";
                                    cout << "\t Sip Tebakanmu Bener\n";
                                    cout << endl;

                                } else if (keduaPilih == 2){
                                    cout << "\t Ternyata Semot\n";
                                    cout << "\t Sip Tebakanmu Bener\n";
                                    cout << endl;

                                } else if (keduaPilih == 3) {
                                    cout << "\t Ternyata Manusia\n";
                                    cout << "\t Sip Tebakanmu Bener\n";
                                    cout << endl;

                                }

                                int nyerangTahanPlyr2;

                                cout << endl;
                                cout << "\t\t pilihan " << Player2 << " benar\n";
                                cout << "\t\t pilih 1 jika ingin menyerang lawan (HP lawan dikurangi -1)\n";
                                cout << "\t\t pilih 2 jika ingin menambah HP (HP akan ditambah +1)\n ";
                                cout << "\t\t Pilih Aksi : "; cin >> nyerangTahanPlyr2;

                                if (nyerangTahanPlyr2 == 1){
                                    HPplayer1--;
                                }
                                else {
                                    HPplayer2++;
                                }
                            }

                            else {

                                if (tebaknyaV2 == 1){
                                    cout << "\t Ternyata Gajah\n";

                                    cout << endl;

                                } else if (tebaknyaV2 == 2){
                                    cout << "\t Ternyata Semot\n";

                                    cout << endl;

                                } else if (tebaknyaV2 == 3) {
                                    cout << "\t Ternyata Manusia\n";

                                    cout << endl;

                                }
                                cout << endl;
                                cout << "\t\tacchhh " << Player2 <<" gagal tebak, HP dikurangi -1\n";
                                HPplayer2--;
                            }
                        }

                        cout << endl;
                        cout << "==========kondisi==========\n";
                        cout << "Nyawa " << Player1 <<" \t: " << HPplayer1 << std::endl;
                        cout << "Nyawa " << Player2 << " \t: " << HPplayer2<< std::endl;
                    }

                    if (HPplayer1 > 0 && HPplayer2 < 1){
                        cout << "\t\t Hasil dari Pertandingan Iseng isengan\n";
                        cout << "\t HP dari " << Player1 << " adalah => " << HPplayer1;
                        cout << endl;
                        cout << "\t HP dari " << Player2 << " adalah => " << HPplayer2;
                        cout << "\t Dadine si "<< Player1 << " MENANG";
                        cout << endl;

                        /// sekarang Nasibnya
                        if (AcakNasib == 1){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << Player1 << " harus menampar " << Player2;
                            }
                            else if (AcakNasib == 2){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << Player1<< " harus mencoret wajah " << Player2;
                            }
                            else if (AcakNasib == 3){
                                cout << "\t Nasib :";
                                cout << "\n\t si "<< Player1 << " harus menabok wajah "<< Player2;
                            }
                            else if (AcakNasib == 4){
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus menyolek potongan cabe di bibir " << Player2;
                            }
                            else if (AcakNasib == 5) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus menabur bedak ke muka si " << Player2;
                            }
                            else if (AcakNasib == 6) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2<< " memijat punggung si " << Player1;
                            }
                            else if (AcakNasib == 7) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus mengoles seluruh wajah langsung dengan telapak tangan si " << Player2 << " dengan bedak";
                            }
                            else if (AcakNasib == 8) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2 << " harus membelikan makanan pada si " << Player1;
                            }
                            else if (AcakNasib == 9) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2 << " harus push up 10x";
                            }
                            else if (AcakNasib == 10) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2 << " harus sit up 10x";
                            }
                    }
                    else if (HPplayer2 > 0 && HPplayer1 < 1) {
                        cout << "\t\t Hasil dari Pertandingan Iseng isengan\n";
                        cout << "\t HP dari " << Player1 << " adalah => " << HPplayer1;
                        cout << endl;
                        cout << "\t HP dari " << Player2 << " adalah => " << HPplayer2;
                        cout << "\t Dadine " << Player2 << " MENANG";
                        cout << endl;

                        if (AcakNasib == 1){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << Player2 << " harus menampar " << Player1;
                            }
                            else if (AcakNasib == 2){
                                cout << "\t Nasib : ";
                                cout << "\n\t si " << Player2 << " harus mencoret wajah " << Player1;
                            }
                            else if (AcakNasib == 3){
                                cout << "\t Nasib :";
                                cout << "\n\t si "<< Player2 << " harus menabok wajah "<< Player1;
                            }
                            else if (AcakNasib == 4){
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus menyolek potongan cabe di bibir " << Player1;
                            }
                            else if (AcakNasib == 5) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2 << " harus menabur bedak ke muka si " << Player1;
                            }
                            else if (AcakNasib == 6) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " memijat punggung si " << Player2;
                            }
                            else if (AcakNasib == 7) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player2 << " harus mengoles seluruh wajah langsung dengan telapak tangan si " << Player1 << " dengan bedak";
                            }
                            else if (AcakNasib == 8) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus membelikan makanan pada si " << Player1;
                            }
                            else if (AcakNasib == 9) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus push up 10x";
                            }
                            else if (AcakNasib == 10) {
                                cout << "\t Nasib : ";
                                cout << "\n\t si "<< Player1 << " harus sit up 10x";
                            }
                    }
                    else if (HPplayer1 == 0 && HPplayer2 == 0){
                        cout << endl;
                        cout << "\nOwalah Seri \n";
                        cout << "Ra nok Adu Nasib\n";
                        cout << endl;
                    }

                    cout << endl;
                    cout << "\n Adu Lagi (y/n) ? ";
                    cin >> ngulang;
                    if (ngulang == 'y'){
                        getchar();
                        system ("cls");
                        goto ulang;
                    }
                    else if (ngulang != 'y'){

                        getchar();
                        system("cls");
                        goto awal;
                    }
                }
            }
            break;

            case 3:
                cout << "Terima Kasih Sudah Bermain";
                cout << endl;
                break;

            default : {
                char kembali = 'y';
                cout << "salah pilihan";
                cout << endl;
                cout << "kembali (y/n) ? ";
                cin >> kembali;
                if(kembali == 'y') {
                    getchar();
                    system("cls");
                    goto awal;
                } else {
                    cout << "Terima Kasih Sudah Bermain";
                    cout << endl;

                }
                break;
            }

        }


    return 0;
}
