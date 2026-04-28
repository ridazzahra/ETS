#include <iostream>
using namespace std;

#define MAX 5

class Queue{
    private:
        char arr[MAX];
        int front, rear;
    public:
        Queue(){
            front = -1;
            rear = -1;
        }
        bool isEmpty(){
            return (front == -1);
        }
        bool isFull(){
            return (rear == MAX - 1);
        }

        void enqueue(char x){
            if(isFull()){
                cout << "Antrean Layanan Akademik Penuh!\n";
                return;
            }
            if(isEmpty()) front = 0;

            arr[++rear] = x;
            cout << "Mahasiswa " << x << " mengambil nomor antrean.\n";
        }

        void dequeue(){
            if(isEmpty()){
                cout << "Antrean Layanan Akademik Kosong!\n";
                return;
            }

            cout << "Mahasiswa " << arr[front] << " dipanggil untuk dilayani.\n";
            if(front == rear) front = rear = -1;
            else front++;
        }

        void display(){
            if(isEmpty()){
                cout << "Kondisi Antrean Layana Akademik: Kosong\n";
                return;
            }
            cout << "Kondisi Antrean Layanan Akademik saat ini: ";
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Queue q;
    cout << "ANTREAN LAYANAN AKADEMIK\n";

    q.enqueue('A');
    q.enqueue('B');
    q.enqueue('C');
    q.display();
    cout << endl;

    q.dequeue();
    q.display();
    cout << endl;

    q.enqueue('D');
    q.display();

    return 0;
}