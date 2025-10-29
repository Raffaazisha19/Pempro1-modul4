daftar_pilihan = [
    "Penjumlahan",
    "Pengurangan",
    "Perkalian",
    "Pembagian",
    "Exit"
]

while True:
    print("\nPilih program")
    for i, item in enumerate(daftar_pilihan):
        print(f"{i+1}. {item}")
    
    try:
        pilihan = int(input("Masukkan Pilihan : "))
    except ValueError:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Raffa Azisha")
        break
        
    elif 1 <= pilihan <= 4:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        
        if pilihan == 1:
            hasil = nilai1 + nilai2
            print(f"Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print(f"Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print(f"Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            hasil = nilai1 / nilai2
            print(f"Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
            
    else:
        print("Input anda salah, silahkan coba lagi\n")