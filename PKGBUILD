# Maintainer: Denis "mudetoday" Kiselev <mudetoday@gmail.com>
pkgname=loremipsum
pkgver=1.0.1
pkgrel=1
pkgdesc="Simple program to print a lorem ipsum text in stdout."
arch=('x86_64')
url="https://example.com"
license=('MIT')
depends=('glibc')
makedepends=('make')

build() {
    cd "$startdir"
    make
}

package() {
    cd "$startdir"
    make DESTDIR="$pkgdir" install
}
