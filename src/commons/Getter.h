 /*
  * Getter.h
  *
  * 4.09.2016 r.
  *
  * Memotosh
  *
  */

#pragma once

#include "Axis.h"

template<class T>
    constexpr inline const T& getX(const sf::Vector2<T>& arg) {
        return arg.x;
    }

template<class T>
    constexpr inline const T& getY(const sf::Vector2<T>& arg) {
        return arg.y;
    }

template<class T>
    constexpr inline T& getX(sf::Vector2<T>& arg) {
        return const_cast<T &>(getX(static_cast<const sf::Vector2<T>&>(arg)));
    }

template<class T>
    constexpr inline T& getY(sf::Vector2<T>& arg) {
        return const_cast<T &>(getY(static_cast<const sf::Vector2<T>&>(arg)));
    }

template<class T>
    constexpr inline const T& getX(const sf::Rect<T>& arg) {
        return arg.left;
    }

template<class T>
    constexpr inline const T& getY(const sf::Rect<T>& arg) {
        return arg.top;
    }

template<class T>
    constexpr inline T& getX(sf::Rect<T>& arg) {
        return const_cast<T &>(getX(static_cast<const sf::Rect<T>&>(arg)));
    }

template<class T>
    constexpr inline T& getY(sf::Rect<T>& arg) {
        return const_cast<T &>(getY(static_cast<const sf::Rect<T>&>(arg)));
    }

template <Axis AXIS>
    struct get {};

template <>
    struct get<Axis::X> {
        template<template <class> class C, class T>
            constexpr static auto& primary(C<T>& arg) {
                return static_cast<T&(*)(C<T>&)>(getX<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static const auto& const_primary(const C<T>& arg) {
                return static_cast<const T&(*)(const C<T>&)>(getX<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static auto& secondary(C<T>& arg) {
                return static_cast<T&(*)(C<T>&)>(getY<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static const auto& const_secondary(const C<T>& arg) {
                return static_cast<const T&(*)(const C<T>&)>(getY<T>)(arg);
            }
    };

template <>
    struct get<Axis::Y> {
        template<template <class> class C, class T>
            constexpr static auto& primary(C<T>& arg){
                return static_cast<T&(*)(C<T>&)>(getY<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static const auto& const_primary(const C<T>& arg) {
                return static_cast<const T&(*)(const C<T>&)>(getY<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static auto& secondary(C<T>& arg) {
                return static_cast<T&(*)(C<T>&)>(getX<T>)(arg);
            }

        template<template <class> class C, class T>
            constexpr static const auto& const_secondary(const C<T>& arg) {
                return static_cast<const T&(*)(const C<T>&)>(getX<T>)(arg);
            }
    };
