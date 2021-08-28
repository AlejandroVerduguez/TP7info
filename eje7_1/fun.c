struct dividir{
    float cosiente;
    float resto;
};

struct dividir divide(int *dividendo, int *divisor){
    struct dividir cosRes;
    cosRes.cosiente=(*dividendo/ *divisor);
    cosRes.resto= *dividendo%*divisor;
    return cosRes;
}