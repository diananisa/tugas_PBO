import java.util.Scanner;

public class Tugas1{
    public static void main(String[] args) {
        final int jumlah_barang = 5;
        String[] nama_barang = {"oppo", "samsung", "vivo", "iphone", "hwaway"};
        int[] stok_barang = {4, 17, 43, 9, 10};
        int[] harga_barang = {3000, 7000, 5000, 100000, 4000};
        int total_harga = 0;
        boolean belanja_lagi = true;
        Scanner input = new Scanner(System.in);
        while(belanja_lagi) {
            System.out.println("Selamat datang di toko handphone!!!");
            System.out.println("HP yang ready : \n1. oppo\n2. samsung\n3. vivo\n4. iphone\n5 hwaway");
            int pilihan;
            System.out.print("Pilih jenis HP (1-5) : ");
            pilihan = input.nextInt();
            if(pilihan >= 1 && pilihan <= jumlah_barang) {
                int jumlah_beli;
                System.out.print("jumlah yang ingin dibeli : ");
                jumlah_beli = input.nextInt();
                if(jumlah_beli <= stok_barang[pilihan - 1]) {
                    int total_harga_barang = harga_barang[pilihan - 1] * jumlah_beli;
                    stok_barang[pilihan - 1] -= jumlah_beli;
                    System.out.println("Anda membeli: ");
                    System.out.println("Nama Barang: " + nama_barang[pilihan - 1]);
                    System.out.println("Harga Barang: " + harga_barang[pilihan - 1]);
                    System.out.println("Jumlah: " + jumlah_beli);
                    System.out.println("Total harga: " + total_harga_barang);
                } else {
                    System.out.println("Maaf, stok tidak mencukupi");
                }
            } else if(pilihan == 0) {
                System.out.println("maaf pilihan anda salah");
                belanja_lagi = false;
            } else {
                System.out.println("pilihan tidak valid. silahkan pilih lagi.");
            }
        }
    }
}
