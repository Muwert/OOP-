namespace Container
{
    template <typename T> 
    class forward_list; 
    template<typename T> 
    class forward_list_iterator; 

    template<typename T>
    class forward_list_node
    {
        friend class forward_list_iterator<T>;
        friend class forward_list<T>;
    public:
        using value_type = T;
        using reference = value_type&;
        using const_reference = const value_type&;
        using _forward_list_node = typename Container::forward_list_node<T>;
        using _node_pointer = typename Container::forward_list_node<T>*;
    private:
        value_type digit;
        _node_pointer _next;
        _node_pointer _pred;
        explicit forward_list_node(const_reference value = value_type{}, _node_pointer next = nullptr, _node_pointer _pred = nullptr) : digit(value), _next(next), _pred(pred) {};
        ~forward_list_node() = default;
    };
}

