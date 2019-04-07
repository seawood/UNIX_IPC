#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>

int main(int argc, char** argv) {
    if ((key_t k = ftok("/home/xie/coding/XSI_msq", 100)) < 0) {
        cout << "ftok error"<<endl;
    }




}
