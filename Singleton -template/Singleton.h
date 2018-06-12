#pragma once


template <typename T>
class Singleton {
public :
	static T* getinstance();
	~Singleton();
private :
	Singleton();
	static T* instance;
};


template<typename T>
T* Singleton<T>::instance = 0;

template<typename T>
inline Singleton<T>::Singleton()
{
}

template<typename T>
inline T * Singleton<T>::getinstance()
{
	if (Singleton<T>::instance == 0)
		Singleton<T>::instance = new T();

	return Singleton<T>::instance;
}

template<typename T>
inline Singleton<T>::~Singleton()
{
	if (Singleton<T>::instance != 0)
	{
		delete Singleton<T>::instance;
		Singleton<T>::instance = 0;
	}
}
