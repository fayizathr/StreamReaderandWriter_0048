

    cout << endl << ">=Membuka dan membaca file " << endl;
    //kondisi jika file ada
    if (infile.is_open())
    {
        //perulangan untuk memunculkan setip baris
        while (getline(infile, baris)) {
            cout << baris << endl;
        }
        //menutup file jika telah selesai
        infile.close();
    }
    //kondisi jika file tidak ada
    else cout << "Unable to open file";
    return 0;
}