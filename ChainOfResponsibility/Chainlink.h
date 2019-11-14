#pragma once

#include <memory>
#include <functional>

template <typename... Args>
class Chainlink {
public:
	void execute(Args... args) {
		if (!this->func(std::forward<Args>(args)...)) {
			if (this->next != nullptr) {
				this->next->execute(std::forward<Args>(args)...);
			}
		}
	}
	void setNext(std::shared_ptr<Chainlink<Args...>> next) {
		this->next = next;
	};

protected:
	Chainlink(std::function<bool(Args...)> func) {
		this->func = func;
	}

private:
	std::shared_ptr<Chainlink<Args...>> next;
	std::function<bool(Args...)> func;
	std::shared_ptr<Chainlink<Args...>> getNext() { return this->next; }
};