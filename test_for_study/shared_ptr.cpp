#include <iostream>
#include <memory>

template <typename T>
class shared_ptr {
private:
	T* 				ptr = nullptr;
	size_t*			count = nullptr;
	// static size_t	size = 0; для всех shared_ptr не правильно
	struct ControlBlock {
		size_t	count;
		T		object;

		template <typename... Args>
		ControlBlock(size_t count, Args&&... args) {}
	};

	template <typename U, typename... Args>
	friend std::shared_ptr<T>	make_shared(Args&&... args);

	shared_ptr(ControlBlock* ptr) :ptr(&ptr->count), count(&ptr->count) { }
public:

	explicit shared_ptr(T* ptr): ptr(ptr), count(new int(1)) {}

	~shared_ptr() {
		if (count == nullptr)
			--(*count);
		if (!*count) {
			delete ptr;
			delete count;
		}
		
	}
};

template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
	return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

template <typename T, typename... Args>
std::shared_ptr<T>	make_shared(Args&&... args) {
	auto p = new ControlBlock(1, std::forward<Args>(args)...);
	return std::shared_ptr(p);
}

int main(int argc, char const *argv[])
{
	auto p = std::make_unique<int>(6);

	return 0;
}
