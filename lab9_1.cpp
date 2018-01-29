#include <iostream>

using namespace std;

/*int main() {
    int s; s= Add (3,5);
    cout << s;
    int Add (int a, int b){
    return (a+b);
    }*/
    /*เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรสองตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
    */
    void swap (int *a,int *b){
    int Arnon ;
    Arnon = *a;
    *a = *b;
    *b = Arnon;
}
int main() {
    int a,b,cmd;
    cin >> a;
    cin >> b;
    do {
        cout << "menu\nl. swap()\n2.guit()"<< endl;
        cin >> cmd;
        if (cmd ==1){
            swap (&a,&b);
            cout << a;
            cout << b;
        }else { break;}
    } while(1);
    return 0;
}


