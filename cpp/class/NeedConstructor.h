#ifndef NeedConstructor_H
#define NeedConstructor_H

class NeedConstructor {
    public : 
        const int maxCount;
        int& ref;
        int twice;
        NeedConstructor();
        NeedConstructor(int mc, int& r);
};

#endif