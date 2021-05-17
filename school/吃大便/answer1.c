int main(int argc, char const *argv[])
{
    int array[10], *ptr;
    ptr = array;
    for (int i = 0; i <10; i++){
        ptr[i] = i;
    }
    return 0;
}
