//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOB_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOB_H
template <typename T> class Blob {
public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;
  Blob();
  Blob(std::initializer<T> il);
  size_type size() { return data->size; }
  bool empty() const  { return data->empty(); }
  void push_back(const T &t) { data->push_back(t); }
  void push_back(T &&t) { data->push_back(std::move(t)); }
  void pop_back();
  T& back();
  T& operator[](size_type i);
private:
  std::shared_ptr<std::vector>> data;
  void check(size_type i, const std::string &msg) const;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOB_H
