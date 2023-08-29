
template<typename SomeType>
struct S { // struct can do anything it wants with this type
};

template <typename meaningful_Type>
meaningful_Type get_smallest(meaningful_Type num1, meaningful_Type num2) {
  return num2 < num1? num2 : num1;
}

