#ifndef NODE_HPP
#define NODE_HPP

#include <memory>

template <typename T>
class CNode
{
private:
    T m_Data;
    std::shared_ptr<CNode> m_Prev;
    std::shared_ptr<CNode> m_Next;
public:
    //constructor
    CNode (const T &  val = T(), const std::shared_ptr<CNode> & ptrPrev = nullptr, const std::shared_ptr<CNode> & ptrNext = nullptr);
    //destructor
    ~CNode ();

    //getter / setter
    const T &GetData () const;
    const std::shared_ptr<CNode> & GetNextNode () const;
    const std::shared_ptr<CNode> & GetPrevNode () const;
    void SetData (const T & val);
    void SetNextNode (const std::shared_ptr<CNode> &);
    void SetPrevNode (const std::shared_ptr<CNode> &);
};


template <typename T>
CNode<T>::CNode (const T & val, const std::shared_ptr<CNode> & ptrPrev, const std::shared_ptr<CNode> & ptrNext ) :
    m_Data (val), m_Prev (ptrPrev), m_Next (ptrNext)
{
}

template <typename T>
CNode<T>::~CNode ()
{
    //delete m_Next;
    //cout << m_Data << endl;
}

template <typename T>
const T & CNode<T>::GetData () const
{
    return m_Data;
}

template <typename T>
const std::shared_ptr<CNode<T>> &CNode<T>::GetPrevNode() const
{
    return m_Prev;
}

template <typename T>
const std::shared_ptr<CNode<T>> & CNode<T>::GetNextNode () const
{
    return m_Next;
}


template <typename T>
void CNode<T>::SetData (const T & val)
{
    m_Data = val;
}

template <typename T>
void CNode<T>::SetNextNode (const std::shared_ptr<CNode> & ANode)
{
    m_Next = ANode;
}

template <typename T>
void CNode<T>::SetPrevNode(const std::shared_ptr<CNode> & ANode)
{
    m_Prev = ANode;
}

#endif // NODE_HPP
