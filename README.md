Парність елемента масиву
Функція отримує на вхід масив цілих чисел, елементи яких мають як негативне, так і позитивне значення, за винятком одного цілого числа, яке є лише негативним або лише позитивним. Вашим завданням буде знайти це ціле число.
Виконання:
значить я маю змінну reverseNumbers яка рахує к-ть чисел з оберненим знаком для конкретного числа
я великим циклом фор ітеруюсь по всіх елементах масиву який я вводив і кожне число порівнюю з кожним (включаючи його самого) на те чи підпадає воно під умову arr[i]=-arr[j], тобто чи є хоч одне число у масиві яке те ж тільки з оберненим знаком від того, яке ітерується зараз
якщо таких обернених чисел до даного у масиві немає, то виконується умова reverseNumbers==0 і у змінну answer яку ми потім повертаємо у main записується значення елементу який ітерувався і до якого не знайшовся обернений відповідник
