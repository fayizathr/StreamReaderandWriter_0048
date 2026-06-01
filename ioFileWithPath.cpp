

    cout << endl << ">= Membuka dan membaca file" << endl;
    //kondisi jika file ada
    if (infile.is_open())
    {
        //perulangan untuk menampilkan setiap baris
        while (getline(infile, baris))
        {
            cout << baris << endl;
        }
        //menutup file jika telah selesai di loop
        infile.close();
    }
    //kondisi jika file tidak ada
    else cout << "Unable to open file";
    return 0;
}