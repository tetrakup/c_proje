# Faiz Hesaplayıcı

Bu proje, kullanıcıların kredi tutarını, faiz oranını ve kredi süresini girerek toplam ödeme ve aylık ödeme miktarlarını hesaplayabilmelerini sağlayan bir faiz hesaplayıcı uygulamasıdır. Kullanıcı ayrıca, belirli aralıklarla ödeme planını görüntüleyebilir.

## Kurulum

1. Bu projeyi GitHub'dan klonlayın:
    ```bash
    git clone https://github.com/tetrakup/c_proje.git
    ```
2. Proje dizinine gidin:
    ```bash
    cd c_proje
    ```
3. Programı derleyin:
    ```bash
    gcc main.c -o faiz-hesaplayici
    ```

## Kullanım

1. Uygulamayı başlatın:
    ```bash
    ./faiz_hesaplayici
    ```
2. Kullanıcıdan istenen bilgileri girin:
    - Adınız
    - Kredi tutarı
    - Yıllık faiz oranı
    - Kredi süresi (yıl ve ay olarak)
    - Yineleme aralığı (ay olarak)

3. Program, toplam ödeme ve aylık ödeme miktarlarını hesaplayıp ekrana yazdıracaktır.

## Fonksiyonlar

- **print_duration:** Verilen ay sayısını yıl ve aya çevirir ve ekrana yazdırır.
- **print_money:** Verilen para miktarını ekrana yazdırır.
- **print_entry:** Toplam ödeme ve aylık ödeme miktarlarını hesaplar ve ekrana yazdırır.
- **print_full_report:** Kullanıcı tarafından girilen süre ve yineleme aralığına göre ödeme planını hesaplar ve ekrana yazdırır.

---

# Interest Calculator

This project is an interest calculator application that allows users to enter the loan amount, interest rate, and loan duration to calculate the total payment and monthly payment amounts. The user can also view the payment schedule at specified intervals.

## Installation

1. Clone this project from GitHub:
    ```bash
    git clone https://github.com/tetrakup/c_proje.git
    ```
2. Navigate to the project directory:
    ```bash
    cd c_proje
    ```
3. Compile the program:
    ```bash
    gcc main.c -o faiz-hesaplayici
    ```

## Usage

1. Start the application:
    ```bash
    ./faiz_hesaplayici
    ```
2. Enter the requested information:
    - Your name
    - Loan amount
    - Annual interest rate
    - Loan duration (in years and months)
    - Iteration interval (in months)

3. The program will calculate and display the total payment and monthly payment amounts.

## Functions

- **print_duration:** Converts the given number of months into years and months and prints them.
- **print_money:** Prints the given amount of money.
- **print_entry:** Calculates and prints the total payment and monthly payment amounts.
- **print_full_report:** Calculates and prints the payment schedule based on the duration and iteration interval entered by the user.

For any questions or feedback regarding the project, please feel free to contact me. Thank you!
