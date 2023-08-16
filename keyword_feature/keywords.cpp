#include <iostream>
#include <array>
#include <unordered_map>
#include <vector>

int main() {

    // ~ is not valid for fs::directory iterator(path)) 
    const char* tmp = std::getenv("HOME");
    const auto home = std::string(tmp);

    std::unordered_map<std::string, std::string> keywords_map{ 

        // refer to Table of Content
        // section name, path
        
        // format 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        
        // variables
        {"var", home + "/code/cpp/examples/variables.cpp"}, 
        {"vars", home + "/code/cpp/examples/variables.cpp"}, 
        {"variable", home + "/code/cpp/examples/variables.cpp"},
        {"variables", home + "/code/cpp/examples/variables.cpp"},

        
        // touples
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        
        // enums
        {"", home + "/code/cpp/examples/enums.cpp"}, 
        {"", home + "/code/cpp/examples/enums.cpp"}, 
        {"", home + "/code/cpp/examples/enums.cpp"},
        {"", home + "/code/cpp/examples/enums.cpp"},
        
        // arrays
        {"arr", home + "/code/cpp/examples/arrays.cpp"}, 
        {"array", home + "/code/cpp/examples/arrays.cpp"}, 
        {"arra", home + "/code/cpp/examples/arrays.cpp"},

        // vector
        {"vec", home + "/code/cpp/examples/vectors.cpp"}, 
        {"vect", home + "/code/cpp/examples/vectors.cpp"}, 
        {"vectors", home + "/code/cpp/examples/vectors.cpp"},

        // size_t 
        {"sizet", home + "/code/cpp/examples/size_t.cpp"}, 
        {"sizt", home + "/code/cpp/examples/size_t.cpp"}, 
        {"st", home + "/code/cpp/examples/size_t.cpp"},
        
        // conditional
        {"if", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"elseif", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"else if", home + "/code/cpp/examples/conditionals.cpp"},
        {"elsif", home + "/code/cpp/examples/conditionals.cpp"},
        {"con", home + "/code/cpp/examples/conditionals.cpp"},
        {"cond", home + "/code/cpp/examples/conditionals.cpp"},
        {"condition", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"conditions", home + "/code/cpp/examples/conditionals.cpp"},
        {"conditional", home + "/code/cpp/examples/conditionals.cpp"}, 

        // switch
        {"case", home + "/code/cpp/examples/switch_statements.cpp"},
        {"casestatement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"case statement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switch", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switchstatement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switch statement", home + "/code/cpp/examples/switch_statements.cpp"},

        // loop
        {"iteration", home + "/code/cpp/examples/loop.cpp"},
        {"iterate", home + "/code/cpp/examples/loop.cpp"},
        {"iterator", home + "code/cpp/examples/loop.cpp"},
        {"iterators", home + "code/cpp/examples/loop.cpp"},
        {"iterating", home + "code/cpp/examples/loop.cpp"},

        // ranges
        {"range", home + "/code/cpp/examples/ranges.cpp"}, 
        {"ran", home + "/code/cpp/examples/ranges.cpp"}, 
        // {"", home + "/code/cpp/examples/ranges.cpp"},
        
        // range pipes
        {"range pipe", home + "/code/cpp/examples/ranges_pipes.cpp"}, 
        {"rangepipe", home + "/code/cpp/examples/ranges_pipes.cpp"}, 
        {"rangep", home + "/code/cpp/examples/ranges_pipes.cpp"},
        {"ranp", home + "/code/cpp/examples/ranges_pipes.cpp"},
        //
        // functions
        {"fun", home + "/code/cpp/examples/functions.cpp"}, 
        {"func", home + "/code/cpp/examples/functions.cpp"}, 
        {"function", home + "/code/cpp/examples/functions.cpp"},
        // {"", home + "/code/cpp/examples/functions.cpp"},
        //
        // inline functions
        {"inline functions", home + "/code/cpp/examples/inline_functions.cpp"}, 
        {"inlinefunctions", home + "/code/cpp/examples/inline_functions.cpp"}, 
        {"inlinefunction", home + "/code/cpp/examples/inline_functions.cpp"}, 
        {"inline fun", home + "/code/cpp/examples/inline_functions.cpp"}, 
        {"inlinefun", home + "/code/cpp/examples/inline_functions.cpp"}, 
        {"inlinef", home + "/code/cpp/examples/inline_functions.cpp"},
        {"inline", home + "/code/cpp/examples/inline_functions.cpp"},
        {"inli", home + "/code/cpp/examples/inline_functions.cpp"},
        {"inl", home + "/code/cpp/examples/inline_functions.cpp"},
        // {"", home + "/code/cpp/examples/inline_functions.cpp"},
        //
        // member functions
        {"member function", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"memberfunction", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"memfunction", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"member", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"mem", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"member", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"memfun", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"class function", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"classfunction", home + "/code/cpp/examples/member_functions.cpp"},
        {"classfunctions", home + "/code/cpp/examples/member_functions.cpp"},
        {"classfunc", home + "/code/cpp/examples/member_functions.cpp"}, 
        {"classfun", home + "/code/cpp/examples/member_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/member_functions.cpp"},
        //
        // public functions
        {"public function", home + "/code/cpp/examples/public_functions.cpp"},
        {"publicfunction", home + "/code/cpp/examples/public_functions.cpp"},
        {"publicfun", home + "/code/cpp/examples/public_functions.cpp"},
        {"pubfunc", home + "/code/cpp/examples/public_functions.cpp"},
        {"pubfun", home + "/code/cpp/examples/public_functions.cpp"},
        {"public", home + "/code/cpp/examples/public_functions.cpp"}, 
        {"pub", home + "/code/cpp/examples/public_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/public_functions.cpp"},
        //
        // overloading functions
        {"over", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        {"overfun", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        {"overfunction", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        {"overload", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        {"overloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"overloaded", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        {"overloading functions", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"overload functions", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"overload function", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"function overload", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"functionoverload", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"functionoverloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"fun overload", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"fun overloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"funoverload", home + "/code/cpp/examples/overloading_functions.cpp"},
        {"funoverloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"", home + "/code/cpp/examples/overloading_functions.cpp"},
        //
        // parameters
        {"parameter", home + "/code/cpp/examples/parameters.cpp"}, 
        {"params", home + "/code/cpp/examples/parameters.cpp"}, 
        {"param", home + "/code/cpp/examples/parameters.cpp"}, 
        {"pars", home + "/code/cpp/examples/parameters.cpp"}, 
        {"par", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"", home + "/code/cpp/examples/parameters.cpp"},
        //
        // pass by value
        {"pass by value", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"passby value", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"pass byvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"pass by val", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"passbyvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"passvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"pass value", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"passbyval", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"byvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        {"byval", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"", home + "/code/cpp/examples/pass_by_value.cpp"},
        //
        // pass by reference
        {"passing by reference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passing by ref", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passingbyreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passingreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passbyreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passbyref", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passrefs", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"passref", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        {"byreference", home + "/code/cpp/examples/pass_by_reference.cpp"},
        {"byref", home + "/code/cpp/examples/pass_by_reference.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"}, 

        // parameters default values 
        {"default parameters", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default parameter", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"defaultparameter", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default params", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"defaultparams", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default arguments", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"defaultarguments", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default argument", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"defaultargument", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default arg", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"defaultarg", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        {"default", home + "/code/cpp/examples/parameters_default_values.cpp"}, 
        // {"", home + "/code/cpp/examples/parameters_default_values.cpp"},
        //
        // references 
        {"reference", home + "/code/cpp/examples/references.cpp"}, 
        {"refer", home + "/code/cpp/examples/references.cpp"}, 
        {"ref", home + "/code/cpp/examples/references.cpp"}, 
        // {"", home + "/code/cpp/examples/references.cpp"},
        //
        // dereference 
        {"dereferencing", home + "/code/cpp/examples/dereference.cpp"}, 
        {"deref", home + "/code/cpp/examples/dereference.cpp"}, 
        {"unreference", home + "/code/cpp/examples/dereference.cpp"}, 
        {"unref", home + "/code/cpp/examples/dereference.cpp"}, 
        // {"", home + "/code/cpp/examples/dereference.cpp"},
        //
        // references const 
        {"references const", home + "/code/cpp/examples/references_const.cpp"}, 
        {"referencesconst", home + "/code/cpp/examples/references_const.cpp"}, 
        {"reference const", home + "/code/cpp/examples/references_const.cpp"}, 
        {"referenceconst", home + "/code/cpp/examples/references_const.cpp"}, 
        {"const references", home + "/code/cpp/examples/references_const.cpp"}, 
        {"const reference", home + "/code/cpp/examples/references_const.cpp"}, 
        {"constreference", home + "/code/cpp/examples/references_const.cpp"}, 
        {"const ref", home + "/code/cpp/examples/references_const.cpp"}, 
        {"constref", home + "/code/cpp/examples/references_const.cpp"}, 
        // {"", home + "/code/cpp/examples/references_const.cpp"},
        //
        // reference operator 
        {"ref operator", home + "/code/cpp/examples/reference_operator.cpp"}, 
        {"refoperator", home + "/code/cpp/examples/reference_operator.cpp"}, 
        {"refop", home + "/code/cpp/examples/reference_operator.cpp"}, 
        // {"", home + "/code/cpp/examples/reference_operator.cpp"},
        //
        // address operator 
        {"address operator", home + "/code/cpp/examples/address_operator.cpp"}, 
        {"addressoperator", home + "/code/cpp/examples/address_operator.cpp"}, 
        {"addressop", home + "/code/cpp/examples/address_operator.cpp"}, 
        {"address", home + "/code/cpp/examples/address_operator.cpp"}, 
        {"add", home + "/code/cpp/examples/address_operator.cpp"}, 
        // {"", home + "/code/cpp/examples/address_operator.cpp"},
        //
        // pointer
        {"pointer", home + "/code/cpp/examples/pointers.cpp"}, 
        {"point", home + "/code/cpp/examples/pointers.cpp"}, 
        // {"", home + "/code/cpp/examples/pointers.cpp"},
        //
        // null pointer
        {"null pointers", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"nullpointers", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"null pointer", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"nullpointer", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"nullpoint", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"point null", home + "/code/cpp/examples/null_pointer.cpp"}, 
        {"pointnull", home + "/code/cpp/examples/null_pointer.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // nullptr
        {"null ptr", home + "/code/cpp/examples/nullptr.cpp"}, 
        {"nulptr", home + "/code/cpp/examples/nullptr.cpp"}, 
        {"nullp", home + "/code/cpp/examples/nullptr.cpp"},
        {"null", home + "/code/cpp/examples/nullptr.cpp"},
        // {"", home + "/code/cpp/examples/nullptr.cpp"},
        //
        // unique pointer
        {"unique pointers", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        {"uniquepointers", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        {"unique pointer", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        {"uniquepointer", home + "/code/cpp/examples/unique_pointer.cpp"},
        {"uniquepoint", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        {"make unique", home + "/code/cpp/examples/unique_pointer.cpp"},
        {"makeunique", home + "/code/cpp/examples/unique_pointer.cpp"},
        {"uniqueptr", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        {"unique", home + "/code/cpp/examples/unique_pointer.cpp"}, 
        // {"", home + "/code/cpp/examples/unique_pointer.cpp"},
        //
        // pointer of pointer
        {"pointer of pointer", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"pointerofpointer", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"pointerpointer", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"point to pointer", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"pointtopointer", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"pointtopoint", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        {"pointpoint", home + "/code/cpp/examples/pointer_of_pointer.cpp"}, 
        // {"", home + "/code/cpp/examples/pointer_of_pointer.cpp"},
        //
        // smart pointer
        {"", home + "/code/cpp/examples/smart_pointer.cpp"}, 
        {"smart pointers", home + "/code/cpp/examples/smart_pointer.cpp"}, 
        {"smart pointer", home + "/code/cpp/examples/smart_pointer.cpp"}, 
        {"smartpointers", home + "/code/cpp/examples/smart_pointer.cpp"}, 
        {"smartpointer", home + "/code/cpp/examples/smart_pointer.cpp"}, 
        {"smart ptr", home + "/code/cpp/examples/smart_pointer.cpp"},
        {"smartptr", home + "/code/cpp/examples/smart_pointer.cpp"},
        {"smart", home + "/code/cpp/examples/smart_pointer.cpp"},
        // {"", home + "/code/cpp/examples/smart_pointer.cpp"},
        //
        // allocation 
        {"allocations", home + "/code/cpp/examples/allocation.cpp"}, 
        {"allocating", home + "/code/cpp/examples/allocation.cpp"}, 
        {"allocate", home + "/code/cpp/examples/allocation.cpp"}, 
        {"allo", home + "/code/cpp/examples/allocation.cpp"}, 
        // {"", home + "/code/cpp/examples/allocation.cpp"},
        //
        // deallocation 
        {"deallocating", home + "/code/cpp/examples/deallocation.cpp"}, 
        {"deallocations", home + "/code/cpp/examples/deallocation.cpp"}, 
        {"deallocate", home + "/code/cpp/examples/deallocation.cpp"}, 
        {"deal", home + "/code/cpp/examples/deallocation.cpp"},
        // {"", home + "/code/cpp/examples/deallocation.cpp"},
        //
        // freeing memory 
        {"freeing memory", home + "/code/cpp/examples/freeing_memory.cpp"}, 
        {"freeingmemory", home + "/code/cpp/examples/freeing_memory.cpp"}, 
        {"free memory", home + "/code/cpp/examples/freeing_memory.cpp"}, 
        {"freememory", home + "/code/cpp/examples/freeing_memory.cpp"}, 
        {"freeing", home + "/code/cpp/examples/freeing_memory.cpp"},
        {"free", home + "/code/cpp/examples/freeing_memory.cpp"},
        // {"", home + "/code/cpp/examples/freeing_memory.cpp"},
        //
        // leaking memory 
        {"leaking memory", home + "/code/cpp/examples/leaking_memory.cpp"},
        {"leakingmemory", home + "/code/cpp/examples/leaking_memory.cpp"},
        {"leaking", home + "/code/cpp/examples/leaking_memory.cpp"},
        {"leaks", home + "/code/cpp/examples/leaking_memory.cpp"},
        {"leak", home + "/code/cpp/examples/leaking_memory.cpp"},
        // {"", home + "/code/cpp/examples/leaking_memory.cpp"},
        //
        // classes 
        {"class", home + "/code/cpp/examples/classes.cpp"}, 
        {"clas", home + "/code/cpp/examples/classes.cpp"}, 
        {"cla", home + "/code/cpp/examples/classes.cpp"}, 
        // {"", home + "/code/cpp/examples/classes.cpp"},
        //
        // class components 
        {"classcomponents", home + "/code/cpp/examples/class_components.cpp"}, 
        {"class components", home + "/code/cpp/examples/class_components.cpp"}, 
        {"classcomponent", home + "/code/cpp/examples/class_components.cpp"}, 
        {"clascomponent", home + "/code/cpp/examples/class_components.cpp"}, 
        {"clacomponent", home + "/code/cpp/examples/class_components.cpp"}, 
        {"classcomp", home + "/code/cpp/examples/class_components.cpp"}, 
        {"components", home + "/code/cpp/examples/class_components.cpp"}, 
        {"component", home + "/code/cpp/examples/class_components.cpp"}, 
        // {"", home + "/code/cpp/examples/class_components.cpp"},
        //
        // span 
        {"spans", home + "/code/cpp/examples/span.cpp"}, 
        {"spa", home + "/code/cpp/examples/span.cpp"}, 
        // {"", home + "/code/cpp/examples/span.cpp"},
        //
        // templates
        {"template", home + "/code/cpp/examples/templates.cpp"}, 
        {"templat", home + "/code/cpp/examples/templates.cpp"}, 
        {"temps", home + "/code/cpp/examples/templates.cpp"}, 
        {"temp", home + "/code/cpp/examples/templates.cpp"}, 
        // {"", home + "/code/cpp/examples/templates.cpp"},
        //
        // template basics 
        {"template basics", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"template basic", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"basic template", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"basictemplate", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"templatebasics", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"temp basics", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"temp basic", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"tempbasics", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"basicstemp", home + "/code/cpp/examples/templates_basics.cpp"}, 
        {"basictemp", home + "/code/cpp/examples/templates_basics.cpp"}, 
        // {"", home + "/code/cpp/examples/templates_basics.cpp"},
        //
        // variadic templates
        {"variadic template", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variadictemplates", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variadictemplate", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variatemplates", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variatemplate", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variadictemp", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variatemp", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"variadic", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        {"varia", home + "/code/cpp/examples/variadic_templates.cpp"}, 
        // {"", home + "/code/cpp/examples/variadic_templates.cpp"},
        //
        // class template argument deduction 
        {"classtemplates", home + "/code/cpp/examples/class_template_argument_deduction.cpp"}, 
        {"classtemplate", home + "/code/cpp/examples/class_template_argument_deduction.cpp"}, 
        {"classtemp", home + "/code/cpp/examples/class_template_argument_deduction.cpp"}, 
        {"ctad", home + "/code/cpp/examples/class_template_argument_deduction.cpp"},
        // {"", home + "/code/cpp/examples/class_template_argument_deduction.cpp"},
        //
        // templates auto return types 
        {"auto templates", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"autotemplates", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"auto template", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"autotemplate", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"templates auto", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"template auto", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"templateauto", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"autotemp", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        {"tempauto", home + "/code/cpp/examples/templates_auto_return_types.cpp"}, 
        // {"", home + "/code/cpp/examples/templates_auto_return_types.cpp"},
        //
        // return value optimization 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        //
        // structs 
        {"struct", home + "/code/cpp/examples/structs.cpp"}, 
        {"s", home + "/code/cpp/examples/structs.cpp"}, 
        // {"", home + "/code/cpp/examples/structs.cpp"},
        //
        // structs against classes 
        {"structs vs classes", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structsvsclasses", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structs and classes", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structsandclasses", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"classes and structs", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"classesandstructs", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structsandclasses", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structsclasses", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structs classes", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structclasses", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structvsclass", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"structclass", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"classesvsstructs", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"classesvsstruct", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        {"classstruct", home + "/code/cpp/examples/structs_against_classes.cpp"}, 
        // {"", home + "/code/cpp/examples/structs_against_classes.cpp"},
        //
        // lambdas
        {"lambda", home + "/code/cpp/examples/lambdas.cpp"}, 
        {"lambd", home + "/code/cpp/examples/lambdas.cpp"}, 
        {"lamb", home + "/code/cpp/examples/lambdas.cpp"}, 
        {"lam", home + "/code/cpp/examples/lambdas.cpp"}, 
        // {"", home + "/code/cpp/examples/lambdas.cpp"},
        //
        // lambdas captures
        {"lambda captures", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambda capture", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdacapture", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdascaptures", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdas captures", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdas capture", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdascapture", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"lambdascaptures", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"capturing", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        {"capture", home + "/code/cpp/examples/lambdas_captures.cpp"}, 
        // {"", home + "/code/cpp/examples/lambdas_captures.cpp"},
        //
        // lambdas captures by value
        {"capture by value", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capture by val", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturebyvalue", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturebyval", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturing by value", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturing by val", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturingbyvalue", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturingbyval", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturingval", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"capturevalue", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        {"captureval", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"}, 
        // {"", home + "/code/cpp/examples/lambdas_captures_by_value.cpp"},
        //
        // lambdas captures by reference 
        {"capture by reference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturebyreferences", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturebyreference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturereferences", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturereference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturerefs", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"captureref", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturing by reference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingbyreferences", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingbyreference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingreferences", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingreference", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingrefs", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        {"capturingref", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"}, 
        // {"", home + "/code/cpp/examples/lamdas_captures_by_reference.cpp"},
        //
        // lambdas captures by values and references 
        {"capturing both", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"capturingboth", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"captures both", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"capturesboth", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"capture both", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"captureboth", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"both captures", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"bothcaptures", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"both capture", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        {"bothcapture", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"}, 
        // {"", home + "/code/cpp/examples/lambdas_captures_by_values_and_references.cpp"},
        //
        // lambda auto
        {"lambdas auto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"lambda auto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"lambdasauto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"lambdaauto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"lamb auto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"lambauto", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"auto lambdas", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"auto lambda", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"autolambdas", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"autolambda", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        {"autolamb", home + "/code/cpp/examples/lambda_auto.cpp"}, 
        // {"", home + "/code/cpp/examples/lambda_auto.cpp"},
        //
        // generic lambdas
        {"generic lambdas", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"genericlambdas", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"generic lambda", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"genericlambda", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"genericlamb", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"gen lambdas", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"genlambdas", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"gen lambda", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"gen lamb", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        {"genlamb", home + "/code/cpp/examples/generic_lambdas.cpp"}, 
        // {"", home + "/code/cpp/examples/generic_lambdas.cpp"},
        //
        // variadic lambdas 
        {"variadic lambdas", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"variadiclambdas", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"variadic lambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"variadiclambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varia lambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varialambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varia lamb", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varialamb", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"var lambdas", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varlambdas", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varlambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"var lambda", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"varlamb", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        {"var lamb", home + "/code/cpp/examples/variadic_lambdas.cpp"}, 
        // {"", home + "/code/cpp/examples/variadic_lambdas.cpp"},
        //
        // const lambdas 
        {"const lambdas", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"constlambdas", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"const lambda", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"constlambda", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"const lamb", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"constlamb", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lambdas const", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lambdasconst", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lambda const", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lambdaconst", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lamb const", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        {"lambconst", home + "/code/cpp/examples/const_lambdas.cpp"}, 
        // {"", home + "/code/cpp/examples/const_lambdas.cpp"},
        //
        // concepts 
        {"conc", home + "/code/cpp/examples/concepts.cpp"}, 
        {"concept", home + "/code/cpp/examples/concepts.cpp"}, 
        // {"", home + "/code/cpp/examples/concepts.cpp"},
        //
        // constants 
        {"constant", home + "/code/cpp/examples/constants.cpp"}, 
        {"const", home + "/code/cpp/examples/constants.cpp"},
        {"cons", home + "/code/cpp/examples/constants.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        //
        // factories 
        {"factory", home + "/code/cpp/examples/factories.cpp"}, 
        {"fact", home + "/code/cpp/examples/factories.cpp"}, 
        {"fac", home + "/code/cpp/examples/factories.cpp"}, 
        // {"", home + "/code/cpp/examples/factories.cpp"},
        //
        // virtual factories 
        {"virtual factories", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virtualfactories", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virtual factory", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virtualfactory", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virtualfac", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virtfac", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        {"virt", home + "/code/cpp/examples/virtual_factories.cpp"}, 
        // {"", home + "/code/cpp/examples/virtual_factories.cpp"},
        //
        // constructors 
        {"constructing", home + "/code/cpp/examples/constructors.cpp"}, 
        {"construction", home + "/code/cpp/examples/constructors.cpp"}, 
        {"constructed", home + "/code/cpp/examples/constructors.cpp"}, 
        {"constructor", home + "/code/cpp/examples/constructors.cpp"}, 
        {"construct", home + "/code/cpp/examples/constructors.cpp"}, 
        // {"", home + "/code/cpp/examples/constructors.cpp"},
        //
        // destructors
        {"destruction", home + "/code/cpp/examples/destructors.cpp"}, 
        {"destructing", home + "/code/cpp/examples/destructors.cpp"}, 
        {"destructor", home + "/code/cpp/examples/destructors.cpp"}, 
        {"destruct", home + "/code/cpp/examples/destructors.cpp"}, 
        {"destroy", home + "/code/cpp/examples/destructors.cpp"}, 
        // {"", home + "/code/cpp/examples/destructors.cpp"},
        //
        // automatic destructors 
        {"automatic destructor", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"automaticdestructor", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"automatic destruction", home + "/code/cpp/examples/automatic_destructors.cpp"},
        {"automaticdestruction", home + "/code/cpp/examples/automatic_destructors.cpp"},
        {"auto destruction", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"autodestruction", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"auto destructor", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"autodestructor", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"auto destruct", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"autodestruct", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"auto destroy", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        {"autodestroy", home + "/code/cpp/examples/automatic_destructors.cpp"}, 
        // {"", home + "/code/cpp/examples/automatic_destructors.cpp"},
        //
        // deterministic object lifetime and destruction
        {"deterministic", home + "/code/cpp/examples/deterministic_object_lifetime_and_destruction.cpp"}, 
        {"determinism", home + "/code/cpp/examples/deterministic_object_lifetime_and_destruction.cpp"}, 
        {"deter", home + "/code/cpp/examples/deterministic_object_lifetime_and_destruction.cpp"}, 
        // {"", home + "/code/cpp/examples/deterministic_object_lifetime_and_destruction.cpp"},
        //
        // RAII 
        {"", home + "/code/cpp/examples/raii.cpp"}, 
        {"", home + "/code/cpp/examples/raii.cpp"},
        //
        // new keyword 
        {"new", home + "/code/cpp/examples/new_keyword.cpp"}, 
        {"", home + "/code/cpp/examples/new_keyword.cpp"},
        //
        // thread_local
        {"thread local", home + "/code/cpp/examples/thread_local.cpp"}, 
        {"threadlocal", home + "/code/cpp/examples/thread_local.cpp"}, 
        {"local thread", home + "/code/cpp/examples/thread_local.cpp"}, 
        {"localthread", home + "/code/cpp/examples/thread_local.cpp"}, 
        {"thread", home + "/code/cpp/examples/thread_local.cpp"}, 
        // {"", home + "/code/cpp/examples/thread_local.cpp"},
        //
        // static 
        {"static objects", home + "/code/cpp/examples/static.cpp"}, 
        {"staticobjects", home + "/code/cpp/examples/static.cpp"}, 
        {"static object", home + "/code/cpp/examples/static.cpp"}, 
        {"staticobject", home + "/code/cpp/examples/static.cpp"}, 
        {"stat", home + "/code/cpp/examples/static.cpp"}, 
        {"", home + "/code/cpp/examples/static.cpp"},
        
        // dynamic 
        {"dynamic objects", home + "/code/cpp/examples/dynamic.cpp"}, 
        {"dynamicobjects", home + "/code/cpp/examples/dynamic.cpp"}, 
        {"dynamic object", home + "/code/cpp/examples/dynamic.cpp"}, 
        {"dynamicobject", home + "/code/cpp/examples/dynamic.cpp"}, 
        {"dynam", home + "/code/cpp/examples/dynamic.cpp"}, 
        {"dyn", home + "/code/cpp/examples/dynamic.cpp"}, 
        // {"", home + "/code/cpp/examples/dynamic.cpp"},
        //
        // fmt format library
        {"fmt format", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmtformat", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmt library", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmtlibrary", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmt lib", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmtlib", home + "/code/cpp/examples/fmt_format_library.cpp"},
        {"fmt", home + "/code/cpp/examples/fmt_format_library.cpp"},
        // {"", home + "/code/cpp/examples/fmt_format_library.cpp"}, 
        //  
        // string_view
        {"string view", home + "/code/cpp/examples/string_view.cpp"}, 
        {"stringview", home + "/code/cpp/examples/string_view.cpp"}, 
        {"view string", home + "/code/cpp/examples/string_view.cpp"}, 
        {"viewstring", home + "/code/cpp/examples/string_view.cpp"}, 
        // {"", home + "/code/cpp/examples/string_view.cpp"},
        //
        // structured bindings
        {"structured bindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structuredbindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structured binding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structuredbinding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structure bindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structurebindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structure binding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structurebinding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"struct bindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structbindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"struct binding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"structbinding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"bindings", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        {"binding", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        // {"", home + "/code/cpp/examples/structured_bindings.cpp"}, 
        //
        // arguments 
        {"arguments", home + "/code/cpp/examples/arguments.cpp"},
        {"argument", home + "/code/cpp/examples/arguments.cpp"},
        {"args", home + "/code/cpp/examples/arguments.cpp"},
        {"arg", home + "/code/cpp/examples/arguments.cpp"},
        // {"", home + "/code/cpp/examples/arguments.cpp"}, 
        //
        // flags 
        {"options", home + "/code/cpp/examples/flags.cpp"},
        {"option", home + "/code/cpp/examples/flags.cpp"},
        {"flag", home + "/code/cpp/examples/flags.cpp"},
        //
        // user input 
        {"prompt user", home + "/code/cpp/examples/user_input.cpp"}, 
        {"promptuser", home + "/code/cpp/examples/user_input.cpp"}, 
        {"askuser", home + "/code/cpp/examples/user_input.cpp"}, 
        {"ask user", home + "/code/cpp/examples/user_input.cpp"}, 
        {"user response", home + "/code/cpp/examples/user_input.cpp"}, 
        {"userresponse", home + "/code/cpp/examples/user_input.cpp"}, 
        {"user answer", home + "/code/cpp/examples/user_input.cpp"}, 
        {"useranswer", home + "/code/cpp/examples/user_input.cpp"}, 
        {"prompt", home + "/code/cpp/examples/user_input.cpp"}, 
        {"answer", home + "/code/cpp/examples/user_input.cpp"}, 
        {"user", home + "/code/cpp/examples/user_input.cpp"}, 
        // {"", home + "/code/cpp/examples/user_input.cpp"},
        //
        // type 
        {"types", home + "/code/cpp/examples/type.cpp"}, 
        {"typ", home + "/code/cpp/examples/type.cpp"}, 
        {"", home + "/code/cpp/examples/type.cpp"},
        //
        // return type 
        {"return types", home + "/code/cpp/examples/return_type.cpp"}, 
        {"returntypes", home + "/code/cpp/examples/return_type.cpp"}, 
        {"return type", home + "/code/cpp/examples/return_type.cpp"}, 
        {"returntype", home + "/code/cpp/examples/return_type.cpp"}, 
        {"returns", home + "/code/cpp/examples/return_type.cpp"}, 
        {"return", home + "/code/cpp/examples/return_type.cpp"}, 
        // {"", home + "/code/cpp/examples/return_type.cpp"},
        //
        // filesystem library
        {"filesystem library", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"filesystemlibrary", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"file library", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"filelibrary", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"file lib", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"filelib", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"filesystem", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"filesys", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"file sys", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        {"fs", home + "/code/cpp/examples/filesystem_library.cpp"}, 
        // {"", home + "/code/cpp/examples/filesystem_library.cpp"},
        // 
        // file creation 
        {"file creation", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"filecreation", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"create files", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"createfiles", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"create a file", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"createafile", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"create file", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"createfile", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"new file", home + "/code/cpp/examples/file_creation.cpp"}, 
        {"newfile", home + "/code/cpp/examples/file_creation.cpp"}, 
        // {"", home + "/code/cpp/examples/file_creation.cpp"},
        //
        // file deletion 
        {"file deletions", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"filedeletions", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"file deletion", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"filedeletion", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"remove files", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"removefiles", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"remove file", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"removefile", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"rm file", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"delete file", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"delete file", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"deletefile", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"delete a file", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"deleteafile", home + "/code/cpp/examples/file_deletion.cpp"}, 
        {"rm", home + "/code/cpp/examples/file_deletion.cpp"}, 
        // {"", home + "/code/cpp/examples/file_deletion.cpp"}, 
        //
        // paths 
        {"path", home + "/code/cpp/examples/paths.cpp"}, 
        {"pat", home + "/code/cpp/examples/paths.cpp"}, 
        // {"", home + "/code/cpp/examples/paths.cpp"},
        //
        // directories
        {"remove directory", home + "/code/cpp/examples/directories.cpp"}, 
        {"removedirectory", home + "/code/cpp/examples/directories.cpp"}, 
        {"remove dir", home + "/code/cpp/examples/directories.cpp"}, 
        {"removedir", home + "/code/cpp/examples/directories.cpp"}, 
        {"directory", home + "/code/cpp/examples/directories.cpp"}, 
        {"rmdir", home + "/code/cpp/examples/directories.cpp"}, 
        {"dir", home + "/code/cpp/examples/directories.cpp"}, 

        // directory creation
        {"createdirectory", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"create directory", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"createdirectory", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"create dir", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"createdir", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"new directory", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"newdirectory", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"new dir", home + "/code/cpp/examples/directory_creations.cpp"}, 
        {"newdir", home + "/code/cpp/examples/directory_creation.cpp"}, 
        {"mkdir", home + "/code/cpp/examples/directory_creation.cpp"}, 
        // {"", home + "/code/cpp/examples/directories.cpp"},
        //
        // directory iterators 
        // {"", home + "/code/cpp/examples/directory_iterators.cpp"}, 
        // {"", home + "/code/cpp/examples/directory_iterators.cpp"}, 
        // {"", home + "/code/cpp/examples/directory_iterators.cpp"},
        // {"", home + "/code/cpp/examples/directory_iterators.cpp"},
        //
        // compilers 
        // {"", home + "/code/cpp/examples/compilers.cpp"}, 
        // {"", home + "/code/cpp/examples/compilers.cpp"}, 
        // {"", home + "/code/cpp/examples/compilers.cpp"},
        // {"", home + "/code/cpp/examples/compilers.cpp"},
        //
        // gnu gcc
        // {"", home + "/code/cpp/examples/gnu_gcc.cpp"}, 
        // {"", home + "/code/cpp/examples/gnu_gcc.cpp"}, 
        // {"", home + "/code/cpp/examples/gnu_gcc.cpp"},
        // {"", home + "/code/cpp/examples/gnu_gcc.cpp"},
        //
        // gnu gcc enable precompiled headers
        {"gcc precompile headers", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gccprecompileheaders", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gcc precompile header", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gccprecompileheader", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gcc precompile", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gccprecompile", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompile headers gcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompileheadersgcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompile header gcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompileheadergcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompile gcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"precompilegcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gcc enable pch", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gccenablepch", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"enable gcc pch", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"enablegccpch", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"enable pch gcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"enablepchgcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"gcc pch", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        {"pch gcc", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"}, 
        // {"", home + "/code/cpp/examples/gnu_gcc_enable_precompiled_headers.cpp"},
        //
        // gnu gcc enable warnings as errors
        {"gcc warnings as errors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc warnings as error", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarningsaserror", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarningsaserrors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarningserrors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc warnings error", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarningserror", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc warnings", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarnings", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccwarning", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc as errors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccaserrors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc as error", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccaserror", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gcc errors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        {"gccerrors", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        // {"", home + "/code/cpp/examples/gnu_gcc_enable_warnings_as_errors.cpp"},
        //
        // gnu gcc disable extensions 
        {"gcc disable extensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccdisableextensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc no extensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccnoextensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc extensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccextensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc remove extensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc remove extension", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccremoveextensions", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccremoveextension", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc disable ext", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccdisable ext", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gcc disabl ext", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        {"gccdisablext", home + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        // {"", h ome + "/code/cpp/examples/gnu_gcc_disable_extensions.cpp"},
        //
        // llvm clang 
        // {"", home + "/code/cpp/examples/llvm_clang.cpp"}, 
        // {"", home + "/code/cpp/examples/llvm_clang.cpp"}, 
        // {"", home + "/code/cpp/examples/llvm_clang.cpp"},
        // {"", home + "/code/cpp/examples/llvm_clang.cpp"},
        //
        // llvm clang enable precompiled headers 
        {"clang precompile headers", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clangprecompileheaders", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clang precompile header", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clangprecompileheader", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clang precompile", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clangprecompile", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompile headers clang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompileheadersclang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompile header clang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompileheaderclang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompile clang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"precompileclang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clang enable pch", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clangenablepch", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"enable clang pch", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"enableclangpch", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"enable pch clang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"enablepchclang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"clang pch", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        {"pch clang", home + "/code/cpp/examples/clang_enable_precompiled_headers.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // clang enable warnings as errors
        {"clang warnings as errors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang warnings as error", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarningsaserror", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarningsaserrors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarningserrors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang warnings error", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarningserror", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang warnings", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarnings", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangwarning", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang as errors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangaserrors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang as error", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangaserror", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clang errors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        {"clangerrors", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        // {"", home + "/code/cpp/examples/clang_enable_warnings_as_errors.cpp"},
        //
        // clang disable extensions 
        {"clang disable extensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccdisableextensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang no extensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccnoextensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang extensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccextensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang remove extensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang remove extension", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccremoveextensions", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccremoveextension", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang disable ext", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccdisable ext", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"clang disabl ext", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        {"gccdisablext", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        // {"", home + "/code/cpp/examples/clang_disable_extensions.cpp"},
        //
        // clang format 
        {"clang format", home + "/code/cpp/examples/clang_format.cpp"}, 
        {"clangformat", home + "/code/cpp/examples/clang_format.cpp"}, 
        {"formatclang", home + "/code/cpp/examples/clang_format.cpp"}, 
        {"format clang", home + "/code/cpp/examples/clang_format.cpp"}, 
        // {"", home + "/code/cpp/examples/clang_format.cpp"},
        //
        // clang tidy 
        {"clang tidy", home + "/code/cpp/examples/clang_tidy.cpp"}, 
        {"clang_tidy", home + "/code/cpp/examples/clang_tidy.cpp"}, 
        {"clangtidy", home + "/code/cpp/examples/clang_tidy.cpp"}, 
        {"tidy", home + "/code/cpp/examples/clang_tidy.cpp"}, 
        // {"", home + "/code/cpp/examples/clang_tidy.cpp"},
        //
        // msvc  
        // {"microsoft compiler", home + "/code/cpp/examples/msvc.cpp"}, 
        // {"microsoftcompiler", home + "/code/cpp/examples/msvc.cpp"}, 
        // {"", home + "/code/cpp/examples/msvc.cpp"},
        //
        // msvc enable precompiled headers 
        {"msvc precompile headers", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvcprecompileheaders", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvc precompile header", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvcprecompileheader", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvc precompile", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvcprecompile", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompile headers msvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompileheadersmsvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompile header msvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompileheadermsvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompile msvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"precompilemsvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvc enable pch", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvcenablepch", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"enable msvc pch", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"enablemsvcpch", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"enable pch msvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"enablepchmsvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"msvc pch", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        {"pch msvc", home + "/code/cpp/examples/msvc_enable_precompiled_headers.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // msvc enable warnings as errors
        {"msvc warnings as errors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc warnings as error", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarningsaserror", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarningsaserrors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarningserrors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc warnings error", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarningserror", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc warnings", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarnings", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcwarning", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc as errors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcaserrors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc as error", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcaserror", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvc errors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        {"msvcerrors", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        // {"", home + "/code/cpp/examples/msvc_enable_warnings_as_errors.cpp"},
        //
        // msvc disable extensions 
        {"msvc disable extensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcdisableextensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc no extensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcnoextensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc extensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcextensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc remove extensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc remove extension", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcremoveextensions", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcremoveextension", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc disable ext", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcdisable ext", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvc disabl ext", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},
        {"msvcdisablext", home + "/code/cpp/examples/msvc_disable_extensions.cpp"},

        // time complexity
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // space complexity
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // containers
        // {"", home + "/code/cpp/examples/containers.cpp"}, 
        // {"", home + "/code/cpp/examples/containers.cpp"}, 
        // {"", home + "/code/cpp/examples/containers.cpp"},
        // {"", home + "/code/cpp/examples/containers.cpp"},
        //
        // containers functions
        // {"", home + "/code/cpp/examples/containers_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_functions.cpp"},
        // {"", home + "/code/cpp/examples/containers_functions.cpp"},
        //
        // containers iterations
        // {"", home + "/code/cpp/examples/containers_iterations.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_iterations.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_iterations.cpp"},
        // {"", home + "/code/cpp/examples/containers_iterations.cpp"},
        //
        // containers size functions 
        // {"", home + "/code/cpp/examples/containers_size_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_size_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/containers_size_functions.cpp"},
        // {"", home + "/code/cpp/examples/containers_size_functions.cpp"},
        //
        // access and research functions 
        // {"", home + "/code/cpp/examples/access_and_research_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/access_and_research_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/access_and_research_functions.cpp"},
        // {"", home + "/code/cpp/examples/access_and_research_functions.cpp"},
        //
        // static_cast 
        // {"static cast", home + "/code/cpp/examples/static_cast.cpp"}, 
        // {"staticcast", home + "/code/cpp/examples/static_cast.cpp"}, 
        // {"", home + "/code/cpp/examples/static_cast.cpp"},
        //
        // maps
        // {"map", home + "/code/cpp/examples/maps.cpp"}, 
        // {"", home + "/code/cpp/examples/maps.cpp"}, 
        //
        // multimaps
        {"multi maps", home + "/code/cpp/examples/multimaps.cpp"}, 
        {"multimaps", home + "/code/cpp/examples/multimaps.cpp"}, 
        {"multimap", home + "/code/cpp/examples/multimaps.cpp"}, 
        {"multi map", home + "/code/cpp/examples/multimaps.cpp"}, 
        // {"map", home + "/code/cpp/examples/multimaps.cpp"}, 
        //
        // forward lists singly linked lists
        {"forward list", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"forwardlist", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"forward", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"single list", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singlelist", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singly list", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singlylist", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"single lists", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singlelists", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singly lists", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singlylists", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        {"singly", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"}, 
        // {"", home + "/code/cpp/examples/forward_lists_singly_linked_lists.cpp"},
        //
        // lists functions 
        {"lists functions", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listsfunctions", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"list functions", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listfunctions", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"list function", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listfunction", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listsfunctions", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"lists funs", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listsfuns", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"lists fun", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listsfun", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"list fun", home + "/code/cpp/examples/lists_functions.cpp"}, 
        {"listfun", home + "/code/cpp/examples/lists_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/lists_functions.cpp"},
        // 
        // hash maps 
        {"hash maps", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hashmaps", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hash map", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hashmap", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hashes", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hashs", home + "/code/cpp/examples/hash_maps.cpp"}, 
        {"hash", home + "/code/cpp/examples/hash_maps.cpp"}, 
        // {"", home + "/code/cpp/examples/hash_maps.cpp"},
        //
        // unordered map 
        {"unordered maps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unorderedmaps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unordered map", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unorderedmap", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unorder maps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unordermaps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unorder map", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unordermap", home + "/code/cpp/examples/unordered_map.cpp"},
        {"no order maps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"noordermaps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"no order maps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"noordermaps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"un maps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unmaps", home + "/code/cpp/examples/unordered_map.cpp"},
        {"un map", home + "/code/cpp/examples/unordered_map.cpp"},
        {"unmap", home + "/code/cpp/examples/unordered_map.cpp"},
        // {"", home + "/code/cpp/examples/unordered_map.cpp"},
        // 
        // unordered multimap 
        {"unordered multimaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unorderedmultimaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unordered multimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unorderedmultimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unorder multimaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unordermultimaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unorder multimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unordermultimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"no order multimaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"noordermaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"no order multimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"noordermultimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"un multimap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unmaps", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"un map", home + "/code/cpp/examples/unordered_multimap.cpp"},
        {"unmap", home + "/code/cpp/examples/unordered_multimap.cpp"},
        // {"", home + "/code/cpp/examples/unordered_multimap.cpp"},
        //
        // unordered lists 
        {"unordered lists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorderedlists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unordered list", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorderedlist", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorder lists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorderlists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorder list", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unorderlist", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"no order lists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"noorderlists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"no order list", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"noorderlist", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"un lists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unlists", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"un list", home + "/code/cpp/examples/unordered_lists.cpp"},
        {"unlist", home + "/code/cpp/examples/unordered_lists.cpp"},
        // {"", home + "/code/cpp/examples/unordered_lists.cpp"},
        //
        // unordered sets
        {"unordered sets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unorderedsets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unordered set", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unorderedset", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unorder sets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unordersets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unorder set", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unorderset", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"no order sets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"noordersets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"no order set", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"noorderset", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"un sets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unsets", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"un set", home + "/code/cpp/examples/unordered_sets.cpp"},
        {"unset", home + "/code/cpp/examples/unordered_sets.cpp"},
        // {"", home + "/code/cpp/examples/unordered_sets.cpp"},
        //
        // unordered multisets
        {"unordered multisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unorderedmultisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unordered multiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unorderedmultiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unorder multisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unordermultisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unorder multiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unordermultiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"no order multisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"noordermultisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"no order multiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"noordermultiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"un multisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unmultisets", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"un multiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        {"unmultiset", home + "/code/cpp/examples/unordered_multisets.cpp"},
        // {"", home + "/code/cpp/examples/unordered_multisets.cpp"},
        //
        // hash functions
        {"hashs functions", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashsfunctions", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashs function", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashsfunction", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashs fun", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashsfun", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hash functions", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashfunctions", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hash function", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashfunction", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hash fun", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hashfun", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"hfun", home + "/code/cpp/examples/hash_functions.cpp"}, 
        {"funh", home + "/code/cpp/examples/hash_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/hash_functions.cpp"},
        //
        // queue 
        {"a line", home + "/code/cpp/examples/queue.cpp"}, 
        {"aline", home + "/code/cpp/examples/queue.cpp"}, 
        {"line", home + "/code/cpp/examples/queue.cpp"}, 
        {"queues", home + "/code/cpp/examples/queue.cpp"}, 
        {"queu", home + "/code/cpp/examples/queue.cpp"}, 
        // {"", home + "/code/cpp/examples/queue.cpp"},
        //
        // priority queue 
        {"priority queues", home + "/code/cpp/examples/priority_queue.cpp"}, 
        {"priorityqueues", home + "/code/cpp/examples/priority_queue.cpp"}, 
        {"priority queue", home + "/code/cpp/examples/priority_queue.cpp"}, 
        {"priorityqueue", home + "/code/cpp/examples/priority_queue.cpp"}, 
        {"heaps", home + "/code/cpp/examples/priority_queue.cpp"}, 
        {"heap", home + "/code/cpp/examples/priority_queue.cpp"}, 
        // {"", home + "/code/cpp/examples/priority_queue.cpp"},
        //
        // min heap 
        {"min heaps", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"minheap", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"minh", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"hmin", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"heapsmin", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"heaps min", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"heap min", home + "/code/cpp/examples/min_heap.cpp"}, 
        {"heapmin", home + "/code/cpp/examples/min_heap.cpp"}, 
        // {"", home + "/code/cpp/examples/min_heap.cpp"},
        //
        // max heap
        {"max heaps", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"maxheaps", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"maxheap", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"heapsmax", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"heapmax", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"hmax", home + "/code/cpp/examples/max_heap.cpp"}, 
        {"maxh", home + "/code/cpp/examples/max_heap.cpp"}, 
        // {"", home + "/code/cpp/examples/max_heap.cpp"},
        //
        // stack
        // {"", home + "/code/cpp/examples/stack.cpp"}, 
        // {"", home + "/code/cpp/examples/stack.cpp"}, 
        // {"", home + "/code/cpp/examples/stack.cpp"},
        // {"", home + "/code/cpp/examples/stack.cpp"},
        //
        // tries retrieval trees autocomplete 
        {"retrieval trees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievaltrees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrieval tree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievaltree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrieving trees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievingtrees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrieving tree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievingtree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrieve trees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievetrees", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrieve tree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"retrievetree", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"auto complete", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"autocomplete", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"autocomp", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"tries", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        {"trie", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"}, 
        // {"", home + "/code/cpp/examples/tries_retrieval_trees_autocomplete.cpp"},
        //
        // trie serialization in json or xml 
        {"tries serialization", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"tries serializing", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"tries serialize", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trie serialization", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trie serializing", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trie serialize", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triesserialization", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triesserializing", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triesserialize", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trieserialization", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trieserializing", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trieserialize", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"tries json", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triesjson", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trie json", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triejson", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"tries xml", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triesxml", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"trie xml", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"triexml", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"serialization", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"serializing", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        {"serialize", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"}, 
        // {"", home + "/code/cpp/examples/trie_serialization_in_json_or_xml.cpp"},
        //
        // trees 
        {"trees", home + "/code/cpp/examples/trees.cpp"}, 
        {"tree", home + "/code/cpp/examples/trees.cpp"}, 
        {"tre", home + "/code/cpp/examples/trees.cpp"}, 
        // {"", home + "/code/cpp/examples/trees.cpp"},
        //
        // breadth first search 
        {"breadth first search", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadthfirstsearch", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadth first", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadthfirst", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadth search", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadthsearch", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"bread first", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadfirst", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"bread search", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadsearch", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadthf", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadths", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"breadth", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"bread", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        {"bfs", home + "/code/cpp/examples/breadth_first_search.cpp"}, 
        // {"", home + "/code/cpp/examples/breadth_first_search.cpp"},
        //
        // depth first search 
        {"depth first search", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depthfirstsearch", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depth first", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depthfirst", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depth search", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depthsearch", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"dept first", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"deptfirst", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"dept search", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"deptsearch", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"dep first", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depfirst", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"dep search", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depsearch", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depthf", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depf", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depths", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"depth", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        {"dfs", home + "/code/cpp/examples/depth_first_search.cpp"}, 
        // {"", home + "/code/cpp/examples/depth_first_search.cpp"},
        //
        // graphs 
        {"graphes", home + "/code/cpp/examples/graphs.cpp"}, 
        {"graph", home + "/code/cpp/examples/graphs.cpp"}, 
        {"grap", home + "/code/cpp/examples/graphs.cpp"}, 
        {"gra", home + "/code/cpp/examples/graphs.cpp"}, 
        // {"", home + "/code/cpp/examples/graphs.cpp"},
        //
        // sorting algorithms 
        {"sorting algorithms", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sortingalgorithms", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sorting algorithm", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sortingalgorithm", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sorting algo", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sortingalgo", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sorting", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        {"sort", home + "/code/cpp/examples/sorting_algorithms.cpp"}, 
        // {"", home + "/code/cpp/examples/sorting_algorithms.cpp"},
        //
        // bubble sort 
        {"bubble sorting", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"bubblesorting", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"bubble sort", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"sort bubble", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"sortbubble", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"bubblesort", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        {"bubble", home + "/code/cpp/examples/bubble_sort.cpp"}, 
        // {"", home + "/code/cpp/examples/bubble_sort.cpp"},
        //
        // quick sort 
        {"quick sorting", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"quicksorting", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"quick sort", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"sort quick", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"sortquick", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"quicksort", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"quick", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"quic", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"fast sorting", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"fastsorting", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"fast sort", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"sort fast", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"sortfast", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"fastsort", home + "/code/cpp/examples/quick_sort.cpp"}, 
        {"fast", home + "/code/cpp/examples/quick_sort.cpp"}, 
        //
        // adjancy lists
        {"adjancy lists", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adjancylists", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adjancy list", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adjancylist", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adj lists", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adjlists", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adj list", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        {"adjlist", home + "/code/cpp/examples/adjancy_lists.cpp"}, 
        // {"", home + "/code/cpp/examples/adjancy_lists.cpp"},
        //
        // adjancy matrix 
        {"adjancy matrix", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        {"adjancymatrix", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        {"adj matrix", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        {"adjmatrix", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        {"matrix", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        {"mat", home + "/code/cpp/examples/adjancy_matrix.cpp"}, 
        // {"", home + "/code/cpp/examples/adjancy_matrix.cpp"},
        //
        // djiska path 
        {"disjka shortest path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjkashortestpath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjka shortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjkashortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjka short", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjkashort", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjka path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjkapath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"disjka", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diska shortest path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diskashortestpath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diska shortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diskashortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diska short", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diskashort", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diska path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diskapath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"diska", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiska shortest path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiskashortestpath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiska shortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiskashortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiska short", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiskashort", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiska path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiskapath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"djiska", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"theshortest path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"theshortestpath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"theshortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"shortest path", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"shortestpath", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"shortest", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        {"short", home + "/code/cpp/examples/dijska_shortest_path.cpp"}, 
        // {"", home + "/code/cpp/examples/adjancy_lists.cpp"},
        //
        // algorithms 
        {"algorithms library", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algorithmslibrary", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algorithms lib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algorithmslib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algo library", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algolibrary", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algo lib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algolib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"al library", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"allibrary", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"al lib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"allib", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algorithms", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algorithm", home + "/code/cpp/examples/algorithms.cpp"}, 
        {"algo", home + "/code/cpp/examples/algorithms.cpp"}, 
        // {"", home + "/code/cpp/examples/algorithms.cpp"},
        //
        // accumulate
        {"accumulates", home + "/code/cpp/examples/accumulate.cpp"}, 
        {"accumulat", home + "/code/cpp/examples/accumulate.cpp"}, 
        // {"", home + "/code/cpp/examples/accumulate.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // scope
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // chaining
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // sstream
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // library
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // linker
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // build
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // warning
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // standard
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // PCH (precompiled headers)
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // filesystem
        // paths
        // files
        // directory
        // queue
        // priority queue (heap)
        // stack
        // trie
        // algorithm
        // accumulate
        // puts
        //
        //
//     std::string keyword = "else";
//     if (keywordToFilePath.find(keyword) != keywordToFilePath.end()) {
//         std::string filePath = keywordToFilePath[keyword];
//         std::cout << "Opening: " << filePath << std::endl;
//     } else {
//         std::cout << "Keyword not found!" << std::endl;
//     }
    };

    for (const auto & pair : keywords_map) {
        std::cout << "key: " << pair.first << '\n';
        std::cout << "value: " << pair.second << '\n'; 
    }

    // if (keywords_map.count("iterate") > 0) {
    //     std::cout << "found elseif\n";

    //     // open nvim
    //     const std::string tmp = "nvim " + keywords_map["iterate"];
    //     const auto open_nvim = tmp.c_str();

    //     std::system(open_nvim);
    // }

}
