string catAndMouse(int x, int y, int z) {
    int m=abs(x-z);
    int n=abs(y-z);
    if(m>n)
    return "Cat B";
    if(m<n)
    return "Cat A";
    return "Mouse C";


}
