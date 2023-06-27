class Queue {
private:
    int *arr;
    int qfront;
    int rare;
    int max_size;
    int length;
public:
    Queue() {
        arr = new int[64];
        qfront = -1;
        rare = 0;
        length = 0;
        max_size = 64;
    }
    ~Queue(){
        delete []arr;
    }
    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return length == 0;
    }

    void enqueue(int data) {
        // in case of overflow
        if(qfront == 0 && rare == max_size){
            int *new_arr = new int[2*max_size];
            for(int i = 0; i < max_size; i++){
                new_arr[i] = arr[i];
            }
            max_size = 2*max_size;
            delete arr;
            arr = new_arr;
        }
        // shift the values back
        if(qfront > 0 && rare == max_size){
            for(int i = qfront, j = 0; i < rare; i++, j++){
                arr[j] = arr[i];
            }
            rare = rare - qfront;
            qfront = 0;
        }
        arr[rare] = data;
        rare++;
        if(qfront == -1) qfront = 0;
        length++;
    }

    int dequeue() {
        if(qfront >= 0){
            int x = arr[qfront];
            qfront++;
            length--;
            if(qfront == rare){
                qfront = -1;
                rare = 0;
            }
            return x;
        }
        return -1;
    }

    int front() {
        if(qfront == -1){
            return -1;
        }
        return arr[qfront];
    }
};
