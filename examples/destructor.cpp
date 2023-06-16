
struct Double_Data {

    Double_Data(const std::size_t size)
      : data(new double[size] /// allocate
    {
    }

    ~Double_Data() { /// destructor
      delete [] data; // free
    }

    double *data;

};

