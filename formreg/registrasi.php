<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Pendaftaran UKM Futsal Mercu Buana Meruya </title>
    <link rel="stylesheet" href="style-registrasi.css" />
</head>
<body>

<div class="container">


    <!-- NAVIGATION BAR -->
    <div class="container-navbar">
    <ul class="ul-navbar">
                <li class="li-navbar">
                    <a href="#" class="a-navbar">HOME</a>
                </li>
                <li class="li-navbar">
                    <a href="https://www.instagram.com/univmercubuana/?hl=en" class="a-navbar">ABOUT US</a>
                </li>
                <li class="li-navbar">
                    <a href="https://wa.me/085339042549" class="a-navbar">CONTACT US</a>
                </li>
            </ul>
        </div>
    <!-- NAVIGATION BAR SELESAI -->
    
    

    <!-- CONTENT 1 -->
    <div class="container-content">
<form action="" method="post">
    
<table class="a-content">
    <caption> Pendaftaran UKM Futsal Mercu Buana Meruya </caption>
    <tr>
        <td width="120"> NIM </td>
        <td> <input type="text" name="nim"> </td>
    </tr>
    <tr>
        <td> Nama </td>
        <td> <input type="text" name="nama"> </td>
    </tr>
    <tr>
        <td width="130">Pilihan Tim</td>
        <td><input type="radio" name="sts3" value="Pria"> Pria
        <input type="radio" name="sts3" value="Wanita"> Wanita</td>
    </tr>
    <tr>
        <td width="130">Tahun Masuk</td>
        <td><input type="radio" name="sts1" value="2023"> 2023
        <input type="radio" name="sts1" value="2022"> 2022
        <input type="radio" name="sts1" value="2021"> 2021</td>
    </tr>
    <tr>
        <td width="130">Jurusan</td>
        <td><input type="text" name="jurusan"</td>
    </tr>
    <tr>
        <td width="130">Nomor Handphone</td>
        <td><input type="text" name="nim1"</td>
    </tr>
        <td width="130">Kampus</td>
        <td><input type="radio" name="sts2" value="Meruya"> Meruya
        <input type="radio" name="sts2" value="Menteng"> Menteng
        <input type="radio" name="sts2" value="Warung Buncit"> Warung Buncit</td>
    </tr>
    <tr>
        <td width="130"><input type="submit" name="proses" value="Simpan">
        <input type="reset" value="Reset"></td>
    </tr>
    
</table>
        </a>
        </div>
        <!-- CONTENT 1 END -->



        <!-- FOOTER -->
<div class="container-footer">
<h1 class="h1-footer">Feel free to ask us!👍</h1>
        </div>
        <!-- FOOTER END-->


    </div>

</body>

</form>
</html>




<?php
include "koneksi.php";

if(isset($_POST['proses'])){
    try {
        mysqli_query($koneksi, "INSERT INTO `data mahasiswa` (`NIM`, `Nama`, `Pemilihan Tim`, `Tahun masuk`, `Jurusan`, `Nomor Handphone`, `Kampus`) VALUES ('$_POST[nim]', '$_POST[nama]', '$_POST[sts3]', '$_POST[sts1]', '$_POST[jurusan]', '$_POST[nim1]', '$_POST[sts2]')");
    } catch (mysqli_sql_exception $e) {
        // Log the error message
        error_log($e->getMessage());
    }
}
?>

