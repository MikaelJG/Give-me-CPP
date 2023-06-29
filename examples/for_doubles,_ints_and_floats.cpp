
// Handy dandy tool for doubles
struct Double_Data {
    Double_Data(const std::size_t size) : data(new double[size] { }
    ~Double_Data() { delete [] data; }
    double *data;
   };

// I want one for ints!
struct Int_Data {
    Int_Data(const std::size_t size) : data(new int[size] { }
    ~Int_Data() { delete [] data; }
    int *data;
   };

// I want one for floats!
struct Float_Data {
    Float_Data(const std::size_t size) : data(new float[size] { }
    ~Float_Data() { delete [] data; }
    float *data;
   };

// If only there was some way to avoid repeating ourselves here!!

