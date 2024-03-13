import java.util.Scanner

open class Zwierze {
    var gatunek: String = ""
    var imie: String = ""
    var wiek: Int = 0

    fun dodajZwierze() {
        println("\nDODAWANIE NOWEGO ZWIERZECIA DO BAZY: ")
        println("Podaj gatunek: ")
        gatunek = readLine() ?: ""
        println("Podaj imie: ")
        imie = readLine() ?: ""
        println("Podaj wiek: ")
        wiek = Scanner(System.`in`).nextInt()
    }

    open fun dajGlos() {
        when (gatunek) {
            "kot" -> println("$imie lat $wiek: Miau!")
            "koza" -> println("$imie lat $wiek: Beeeee!")
            "krowa" -> println("$imie lat $wiek: Muuuuu!")
            else -> println("nieznany gatunek! Moze jakies UFO?!")
        }
    }
}

class Kot : Zwierze() {
    override fun dajGlos() {
        println("$imie lat $wiek: Miau!")
    }
}

class Koza : Zwierze() {
    override fun dajGlos() {
        println("$imie lat $wiek: Beeeee!")
    }
}

class Krowa : Zwierze() {
    override fun dajGlos() {
        println("$imie lat $wiek: Muuuuu!")
    }
}

fun main() {
    val scanner = Scanner(System.`in`)
    val z1 = Kot()
    z1.dodajZwierze()
    z1.dajGlos()

    val z2 = Koza()
    z2.dodajZwierze()
    z2.dajGlos()
}
