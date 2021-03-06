#ifndef LAHBPCG_H
#define LAHBPCG_H
namespace ImageStack {

class LAHBPCG : public Operation {
public:
    void help();
    bool test();
    void parse(vector<string> args);

    static Image apply(Image d, Image gx, Image gy,
                       Image w, Image sx, Image sy, int max_iter, float tol);
private:
};

}
#endif
