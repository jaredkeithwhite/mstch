auto data = mstch::object{
  {"a_object", mstch::object{
    {"title", std::string{"this is an object"}},
    {"description", std::string{"one of its attributes is a list"}},
    {"a_list", mstch::array{
      mstch::object{{"label", std::string{"listitem1"}}},
      mstch::object{{"label", std::string{"listitem2"}}}
    }}
  }}
};